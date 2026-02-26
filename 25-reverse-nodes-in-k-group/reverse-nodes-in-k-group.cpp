class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || k == 1) return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prevGroup = dummy;

        while(true){
            // check if k nodes exist
            ListNode* kth = prevGroup;
            for(int i = 0; i < k && kth; i++){
                kth = kth->next;
            }

            if(!kth) break; // less than k nodes left

            ListNode* groupNext = kth->next;

            // reverse k nodes
            ListNode* prev = groupNext;
            ListNode* curr = prevGroup->next;

            while(curr != groupNext){
                ListNode* temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }

            // connect with previous part
            ListNode* temp = prevGroup->next;
            prevGroup->next = kth;
            prevGroup = temp;
        }

        return dummy->next;
    }
};