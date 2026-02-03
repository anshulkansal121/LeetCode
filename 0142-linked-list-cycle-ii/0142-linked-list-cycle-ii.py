# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        slow = head
        fast = head
        flag = 0
        while(flag == 0 and fast and fast.next):
            slow = slow.next
            fast = fast.next.next
            if(slow == fast):
                flag = 1
        if(flag == 0):
            return None
        else:
            fast = head
            while fast != slow:
                fast = fast.next
                slow = slow.next
            return slow