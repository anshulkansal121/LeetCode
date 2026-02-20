# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if not head:
            return head
        size = 1
        ptr = head
        while(ptr.next):
            ptr = ptr.next
            size+=1
        k = k%size
        ptr.next = head
        ptr = head
        for _ in range( size - k - 1 ):
            ptr = ptr.next
        head = ptr.next
        ptr.next = None 
        return head
        