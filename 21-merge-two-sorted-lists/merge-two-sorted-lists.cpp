/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        

        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        ListNode* fast = list1;
        ListNode* slow = list2;

        while(fast!=NULL && slow!=NULL){
            if(fast->val <= slow->val){
                tail->next = fast;
                fast=fast->next;
            }else{
                tail->next = slow;
                slow = slow->next;
            }
            tail = tail->next;
        }
        if(fast!=NULL){
            tail->next = fast;
        }

        if(slow!=NULL){
            tail->next = slow;
        }
        return dummy->next;


    }
};