// Solution of 2181. Merge Nodes in Between Zeros(https://leetcode.com/problems/merge-nodes-in-between-zeros/)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeNodes(struct ListNode* head) {
    struct ListNode* current = head->next;  
    struct ListNode* resultHead = NULL;  
    struct ListNode* resultTail = NULL; 
    int sum = 0;

    while (current != NULL) {
        if (current->val == 0) {
            if (sum > 0) {
                struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
                newNode->val = sum;
                newNode->next = NULL;

                if (resultHead == NULL) {
                    resultHead = newNode;
                    resultTail = resultHead;
                } else {
                    resultTail->next = newNode;
                    resultTail = resultTail->next;
                }
            }
            sum = 0;
        } else {
            sum += current->val;
        }

        current = current->next;
    }

    return resultHead;  
}

