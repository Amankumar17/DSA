# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: ListNode) -> ListNode:
        if head==None or head.next==None:
            return None
        slowptr=head
        dt={}
        dt[head]=True
        
        while(slowptr.next):
            try:
                if slowptr.next and dt[slowptr.next]:
                    return slowptr.next
            except:
                dt[slowptr.next]=True
            slowptr=slowptr.next   
        return None