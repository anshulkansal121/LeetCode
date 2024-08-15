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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy1 = new ListNode(-1);
        ListNode* dummy2 = new ListNode(-1);
        ListNode* l1 = dummy1;
        ListNode* l2 = dummy2;
        ListNode* temp = head;
        while(temp)
        {
            if(temp->val>=x)
            {
                l2->next = temp;
                l2 = temp;
            }
            else
            {
                l1->next = temp;
                l1 = temp;
            }
            temp = temp->next;
        }
        l1->next = dummy2->next;
        l2->next = NULL;
        return dummy1->next;

    }
};