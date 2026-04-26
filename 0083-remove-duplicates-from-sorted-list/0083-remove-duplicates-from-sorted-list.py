# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        seen=set()

        demo=ListNode(-1)
        cur=demo
        temp=head

        while temp:
            if temp.val not in seen:
                seen.add(temp.val)
                cur.next=temp
                cur=cur.next
            temp=temp.next    
        cur.next=None
        return demo.next        