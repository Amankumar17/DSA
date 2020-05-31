def mergeKLists(self, lists: List[ListNode]) -> ListNode:
        head=None
        cnt=0
        mx=1000
        n=len(lists)
        ptr=head
        
        for i in range(n):
            if lists[i]==None:
                cnt+=1
        
        while(cnt<n):
            ind=-1
            mx=10000
            for i in range(n):
                if lists[i]!=None and lists[i].val<mx:
                    ind=i
                    mx=lists[i].val
            if ind!=-1:
                if head==None:
                    head=lists[ind]
                    lists[ind]=lists[ind].next
                    head.next=None
                    ptr=head
                else:
                    ptr.next=lists[ind]
                    lists[ind]=lists[ind].next
                    ptr=ptr.next
                    ptr.next=None
                
            if lists[ind]==None:
                cnt+=1
            
        return head

#Alternate approach
    # def mergeKLists(self, lists: List[ListNode]) -> ListNode:
    #     l=[]
    #     for i in range(len(lists)):
    #         while(lists[i]):
    #             l.append(lists[i].val)
    #             lists[i]=lists[i].next
    #     l.sort()
        
    #     if len(l)==0:
    #         return None
    #     head=None
    #     tmp=ListNode(l[0])
    #     head=tmp
    #     tmp.next=None
    #     ptr=head
    #     for i in range(1,len(l)):
    #         tmp=ListNode(l[i])
    #         ptr.next=tmp
    #         ptr=ptr.next
    #     return head