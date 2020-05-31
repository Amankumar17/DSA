# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: ListNode) -> bool:
        if head==None or head.next==None:
            return False
        slowptr=head
        fastptr=head.next
        
        while(True):
            if slowptr==fastptr:
                return True
            elif fastptr==None or fastptr.next==None:
                return False
            slowptr=slowptr.next
            fastptr=fastptr.next.next