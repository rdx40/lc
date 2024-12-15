/**
solution for 2807. Insert Greatest Common Divisors in Linked List (https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/description/) 
using java

**/



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
    private int gcd(int a, int b) {
        while(b>0){
            int temp = b;
            b = a%b;
            a = temp;
        }
        return a;
    }
    public ListNode insertGreatestCommonDivisors(ListNode head) {
        for(ListNode curr = head; curr.next != null;){
            ListNode new1 = new ListNode(gcd(curr.val,curr.next.val),curr.next);
            curr.next = new1;
            curr = new1.next;
        }
        return head;
    }
}
