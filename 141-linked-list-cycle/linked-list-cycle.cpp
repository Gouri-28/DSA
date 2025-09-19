/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return false;
        }

        ListNode *temp = head;
        unordered_set<ListNode*> visited;
        while(temp!=NULL){
            if(visited.find(temp)!=visited.end()){
            return 1;
            }
            visited.insert(temp);
            temp=temp->next;
        }
        return 0;
    }
};