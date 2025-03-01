class Solution:
    def applyOperations(self, nums: List[int]) -> List[int]:
        for i in range(0,len(nums)-1):
            if nums[i] == nums[i+1]:
                nums[i] *= 2
                nums[i+1] = 0
        non_zero_nums = [num for num in nums if num != 0]
        zero_nums = [0] * (len(nums) - len(non_zero_nums))
        nums = non_zero_nums + zero_nums
        return nums
        
