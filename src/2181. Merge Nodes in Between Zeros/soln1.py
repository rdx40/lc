## Solution of 2181. Merge Nodes in Between Zeros(https://leetcode.com/problems/merge-nodes-in-between-zeros/)



# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr = head
        tail = test = ListNode()
        
        while curr:
            if curr.val == 0:
                curr = curr.next
                continue
            
            node = ListNode(0)
            while curr and curr.val != 0:
                node.val += curr.val
                curr = curr.next

            tail.next = node
            tail = node
        return test.next
