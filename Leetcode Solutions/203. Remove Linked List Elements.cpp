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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* newhead = new ListNode();
        
        if(!head) return head;
        
        ListNode* cur = newhead;
        
        while(1){
            int value = head->val;
            if(value != val){
                cur->next = head;
                cur = head;
                if(head->next == NULL) break;
                head = head->next;
            }
            else if(head->next == NULL){
                cur->next = NULL;
                break;
            }
            else{
                head = head->next;
            }
        }
        
        return newhead->next;
    }
};
