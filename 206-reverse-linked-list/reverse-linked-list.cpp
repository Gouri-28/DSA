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
    ListNode* reverseList(ListNode* head) {         //  2 3 4 5 1
        
        ListNode*prev=NULL;
        ListNode*next=NULL;
        ListNode*curr=head;

        while(curr!=NULL){
            next=curr->next;

            curr->next=prev;
            prev=curr;
            curr=next;
            
        }
        return prev;
    }
};