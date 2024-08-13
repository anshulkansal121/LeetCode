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
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while(curr)
        {
            next  = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* KthNode(ListNode* head, int steps)
    {
        ListNode* temp = head;
        while(temp && steps>1)
        {
            steps--;
            temp = temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevNode = NULL;
        while(temp)
        {
            ListNode* Kth = KthNode(temp,k);
            if(!Kth)
            {
                if(prevNode)
                {
                    prevNode->next = temp;
                }
                    break;
            }
            ListNode* nextNode = Kth->next;
            Kth->next = NULL;
            reverse(temp);
            if(temp==head)
                head = Kth;
            else
                prevNode->next = Kth;
            prevNode = temp;
            temp = nextNode;
        }
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