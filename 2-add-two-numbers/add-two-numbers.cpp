class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* temp = l1;
        ListNode* temp2 = l2;
        vector<int> ans1;
        vector<int> ans2;

        while(temp != NULL){
            ans1.push_back(temp->val);
            temp = temp->next;
        }

        while(temp2 != NULL){
            ans2.push_back(temp2->val);
            temp2 = temp2->next;
        }

        vector<int> sum;
        int carry = 0;
        int i = 0;

        while(i < ans1.size() || i < ans2.size() || carry != 0){
            
            int val1 = (i < ans1.size()) ? ans1[i] : 0;
            int val2 = (i < ans2.size()) ? ans2[i] : 0;

            int total = val1 + val2 + carry;

            sum.push_back(total % 10);
            carry = total / 10;

            i++;
        }

        // ❌ remove reverse — not needed

        ListNode* dummy = new ListNode(0);
        ListNode* temporary = dummy;

        for(int j = 0; j < sum.size(); j++){
            temporary->next = new ListNode(sum[j]);
            temporary = temporary->next;
        }

        return dummy->next;
    }
};