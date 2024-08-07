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
    ListNode* oddEvenList(ListNode* head) {
        if(!head)
            return NULL;
        if(!head->next)
            return head;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* temp = head->next;
        while(odd->next && even->next)
        {
            if(even->next){
                odd->next = even->next;
                odd = odd->next;
            }
            if(odd->next){
                even->next = odd->next;
                even = even->next;
            }
        }
        odd->next = temp;
        even->next = NULL;
        return head;
    }
};

auto init = []()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();