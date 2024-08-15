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
    ListNode* kthEnd(ListNode* head, int k)
    {
        ListNode* slow = head;
        ListNode* fast = head;
        while(k>1)
        {
            fast = fast->next;
            k--;
        }
        while(fast->next)
        {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* start = head;
        ListNode* end = kthEnd(head,k);
        while(k>1)
        {
            start = start->next;
            k--;
        }
        swap(start->val,end->val);
        return head;
        
    }
};