/*
solution for 2807. Insert Greatest Common Divisors in Linked List
(https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/description/) 
using C
Uses the euclidian theorem for finding gcd which reduces the time complexity to O(log n)
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    for (struct ListNode* curr = head; curr != NULL && curr->next != NULL;) {
        int gcdv = gcd(curr->val, curr->next->val);
        struct ListNode* insert = (struct ListNode*)malloc(sizeof(struct ListNode));
        insert->val = gcdv;
        insert->next = curr->next;
        curr->next = insert;
        curr = insert->next;
    }

    return head;
}
