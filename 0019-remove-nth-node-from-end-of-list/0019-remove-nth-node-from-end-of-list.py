# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        size = 0
        ptr = head
        while ptr:
            size+=1
            ptr = ptr.next
        target = size - n
        ptr = head
        if(target == 0):
            head = head.next
            return head
        while ptr and target!=1:
            target -= 1
            ptr = ptr.next
        
        ptr.next = ptr.next.next
        return head