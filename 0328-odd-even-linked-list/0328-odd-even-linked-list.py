# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def oddEvenList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        demo1=ListNode(-1)
        demo2=ListNode(-1)
        x1=demo1
        x2=demo2

        cur=head

        while cur:
            demo1.next=cur
            demo1=cur

            if cur.next is not None:
                demo2.next=cur.next
                demo2=demo2.next
                cur=cur.next.next
            else:
                cur=cur.next    
        demo1.next=x2.next
        demo2.next=None
        return x1.next
