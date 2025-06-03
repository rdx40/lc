class Solution:
    def isZeroArray(self, nums: List[int], queries: List[List[int]]) -> bool:
        n = len(nums)
        diff = [0]* ( n + 1 )
        for l,r in queries:
            diff[l] += 1
            if(r+1 < len(diff)):
                diff[r+1] -= 1
        availableDecrements = [0] * n
        availableDecrements[0] = diff[0]
        for i in range(1, n):
            availableDecrements[i] = availableDecrements[i-1]+diff[i]
        for i in range(n):
            if(nums[i] > availableDecrements[i]):
                return False
        return True

