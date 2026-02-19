# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverse(self, l: ListNode) -> ListNode:
        prev = None 
        curr = l
        while(curr):
            nxt = curr.next
            curr.next = prev 
            prev = curr
            curr = nxt
        
        return prev

    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        l1 = self.reverse(l1)
        l2 = self.reverse(l2)
        carry = 0
        dummyhead =  ListNode(0)
        tail = dummyhead

        while l1 or l2 or carry:
            dig1 = l1.val if l1 else 0
            dig2 = l2.val if l2 else 0

            total = dig1 + dig2 + carry
            dig = total %10
            carry = total //10

            newNode = ListNode(dig)
            tail.next = newNode
            tail = tail.next

            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None

        return self.reverse(dummyhead.next)