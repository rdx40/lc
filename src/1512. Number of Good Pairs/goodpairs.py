##Solution to 1512. Number of Good Pairs(https://leetcode.com/problems/number-of-good-pairs/description/)


class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        cnt = 0
        freq ={}

        for i in nums:
            if i in freq:
                cnt += freq[i]
                freq[i] += 1
            else:
                freq[i] = 1
        return cnt
            