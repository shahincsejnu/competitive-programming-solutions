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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode();
        ListNode *cur = head;

        while(1){
            if(!l1 || !l2) break;

            int val1 = l1->val, val2 = l2->val;

            if(val1 <= val2){
                cur->next = l1;
                cur = l1;
                l1 = l1->next;
            }
            else{
                cur->next = l2;
                cur = l2;
                l2 = l2->next;
            }
        }

        while(l1){
            cur->next = l1;
            cur = l1;
            l1 = l1->next;
        }
        while(l2){
            cur->next = l2;
            cur = l2;
            l2 = l2->next;
        }

        cur->next = NULL;

        return head->next;
    }
};