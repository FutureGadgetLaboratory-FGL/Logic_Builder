class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        curr = temp = head
        nxt = None
        prev = None
        count = 0
        # check if next count is equal to k
        while temp and count<k:
            temp = temp.next
            count += 1
        if count < k: 
            return curr
        # if k nodes then reverse
        count = 0
        while curr and count<k:
            nxt = curr.next
            curr.next = prev
            prev = curr
            curr = nxt
            count += 1
        # reverse next k
        if nxt :
            head.next = self.reverseKGroup(nxt, k)
        return prev
