public class Solution {
    public string TriangleType(int[] nums) {
        if (!IsTriangle(nums)) return "none";
        if (IsEquilateral(nums)) return "equilateral";
        if (IsIsosceles(nums)) return "isosceles";
        return "scalene";
    }
    private bool IsTriangle(int[] nums)
    {
        return nums[0] + nums[1] > nums[2] &&
               nums[0] + nums[2] > nums[1] &&
               nums[1] + nums[2] > nums[0];
    }

    private bool IsEquilateral(int[] nums)
    {
        return nums[0] == nums[1] && nums[1] == nums[2];
    }

    private bool IsIsosceles(int[] nums)
    {
        return nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2];
    }
}