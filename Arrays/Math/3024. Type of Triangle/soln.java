/*
class Solution {
    public String triangleType(int[] nums) {
        Arrays.sort(nums);
        if (nums[0] + nums[1] <= nums[2])
            return "none";
        if (nums[0] == nums[1] && nums[1] == nums[2]) {
            return "equilateral";
        }
        if (nums[0] == nums[1] || nums[1] == nums[2]) {
            return "isosceles";
        }
        return "scalene";
    }
}
*/

import java.util.*;

//faster
class Solution {
    public String triangleType(int[] nums) {
        if (!isTriangle(nums)) return "none";
        if (isEquilateral(nums)) return "equilateral";
        if (isIsosceles(nums)) return "isosceles";
        return "scalene";
    }

    private boolean isTriangle(int[] nums) {
        return nums[0] + nums[1] > nums[2] &&
               nums[0] + nums[2] > nums[1] &&
               nums[1] + nums[2] > nums[0];
    }

    private boolean isEquilateral(int[] nums) {
        return nums[0] == nums[1] && nums[1] == nums[2];
    }

    private boolean isIsosceles(int[] nums) {
        return nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2];
    }
}

public class soln{
    public static void main(String[] args){
        Solution sol = new Solution();
        Scanner sc = new Scanner(System.in);
        int[] nums = new int[3];
        for (int i = 0; i < 3; i++) {
            nums[i] = sc.nextInt();
        }
        String ans = sol.triangleType(nums);
        System.out.println(ans);
    }
}

