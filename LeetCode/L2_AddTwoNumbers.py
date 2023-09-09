# 2. Add Two Numbers

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:

        tail = ListNode(0)
        iterator = tail
        carries = False

        while l1 is not None or l2 is not None or carries != False:
            digit1 = l1.val if l1 is not None else 0
            digit2 = l2.val if l2 is not None else 0
            sum = digit1 + digit2 + (1 if carries else 0)

            carries = False
            if sum > 9:
                carries = True
                sum -= 10

            newNode = ListNode(sum)
            iterator.next = newNode
            iterator = iterator.next

            l1 = l1.next if l1 is not None else None
            l2 = l2.next if l2 is not None else None

        result = tail.next
        tail.next = None
        return result