## Solution of 2181. Merge Nodes in Between Zeros(https://leetcode.com/problems/merge-nodes-in-between-zeros/)

class Solution:
  def mergeNodes(self, head: ListNode | None) -> ListNode | None:
    curr = head.next

    while curr:
      running = curr
      summ = 0
      while running.val > 0:
        summ += running.val
        running = running.next

      curr.val = summ
      curr.next = running.next
      curr = running.next

    return head.next