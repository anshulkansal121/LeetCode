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
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || left==right) return head;
        ListNode* leftNode = head;
        ListNode* rightNode = head;
        ListNode* prev = NULL;
        ListNode* next = rightNode;
        while (leftNode && left>1)
        {
            left--;
            prev = leftNode;
            leftNode = leftNode->next;
        }

        while (rightNode && right>1)
        {
            right--;
            rightNode = rightNode->next;
        }
        if(prev)
            prev->next = NULL;
        next = rightNode->next;
        rightNode->next = NULL;
        reverse(leftNode);
        if(!prev)
            head = rightNode;
        else
            prev->next = rightNode;
        leftNode->next = next;

        return head;
    }
};