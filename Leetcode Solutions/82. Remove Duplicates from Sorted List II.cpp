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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        if(!head->next) return head;
        
        ListNode* new_head = new ListNode();
        ListNode* ret = new_head;
        
        map<int, int> mp;
        
        ListNode* cur_node = head;
        
        while(cur_node != NULL){
            mp[cur_node->val]++;
            cur_node = cur_node->next;
        }
        
        while(head != NULL){
            if(mp[head->val] == 1){
                new_head->next = head;
                new_head = new_head->next;
            }
            
            head = head->next;
        }
        
        new_head->next = NULL;
        
        return ret->next;
    }
};