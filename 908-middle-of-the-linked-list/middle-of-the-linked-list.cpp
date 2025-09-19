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
    ListNode* middleNode(ListNode* head) {
        ListNode *prev = head;
        int count=0;

        while(prev!=NULL){
            count++;
            prev = prev->next;

        }
        int mid = count/2;
        prev = head;
        for(auto i=0;i<mid;i++){
            prev = prev->next;
        }
        return prev;
    }
};