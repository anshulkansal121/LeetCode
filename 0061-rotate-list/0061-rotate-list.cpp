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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head|| k==0) return head;
        ListNode* start = head;
        ListNode* ptr = head;
        int size = 1;
        while(start->next)
        {
            size++;
            start = start->next;
        }
        start->next= head;
        k = k%size;
        int steps = size - k;
        while(steps>1)
        {
            ptr = ptr->next;
            steps--;
        }
        head = ptr->next;
        ptr->next = NULL;
        return head;
    }
};

auto init = []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();