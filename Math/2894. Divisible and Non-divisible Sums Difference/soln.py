class Solution:
    def sOD(self, n ,m):
        cnt = math.floor(n/m)
        return m*cnt*(cnt+1)/2
    def differenceOfSums(self, n: int, m: int) -> int:
        totalSum = n*(n+1)/2
        divSum = self.sOD(n,m)
        nonDiv = totalSum - divSum
        return (int)(nonDiv - divSum)