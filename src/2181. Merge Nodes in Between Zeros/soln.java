// Solution of 2181. Merge Nodes in Between Zeros(https://leetcode.com/problems/merge-nodes-in-between-zeros/)



/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeNodes(ListNode head) {
        ListNode current = head.next;
        ListNode resultHead = null;
        ListNode resultTail = null;
        int sum = 0;
        while (current != null) {
            if (current.val == 0) {
                if (sum > 0) {
                    ListNode newNode = new ListNode(sum);
                    if (resultHead == null) {
                        resultHead = newNode;
                        resultTail = resultHead;
                    } else {
                        resultTail.next = newNode;
                        resultTail = resultTail.next;
                    }
                }
                sum = 0;
            } else {
                sum += current.val;
            }
            
            current = current.next;
        }
        
        return resultHead;
    }
}

