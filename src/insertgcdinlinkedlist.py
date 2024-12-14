## Solution for 2807. Insert Greatest Common Divisors in Linked List(https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/description/)



###Brute Force

class Solution:
    def insertGreatestCommonDivisors(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        def divisors(num):
            div = []
            for i in range(1, num + 1):
                if num % i == 0:
                    div.append(i)
            return div
        
        def gcd(a, b):
            diva = divisors(a)
            divb = divisors(b)
            commondiv = set(diva) & set(divb)
            if commondiv:
                return max(commondiv)
            else:
                return 1
        
        curr = head
        while curr and curr.next:
            n1 = curr.val
            n2 = curr.next.val
            gcdv = gcd(n1, n2)
            newNode = ListNode(gcdv)
            newNode.next = curr.next
            curr.next = newNode
            curr = curr.next.next
        
        return head


##Euclidian Theorem

class Solution:
    def insertGreatestCommonDivisors(self, head: Optional[ListNode]) -> Optional[ListNode]:
        def gcd(a,b):
            while b>0:
                a, b = b, a%b
            return a
        
        curr = head
        while(curr.next):
            n1,n2=curr.val,curr.next.val
            curr.next = ListNode(gcd(n1,n2),curr.next)
            curr = curr.next.next
        return head



