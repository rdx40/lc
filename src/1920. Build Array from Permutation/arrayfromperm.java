/* Solution for 1920. Build Array From Permutation(https://leetcode.com/problems/build-array-from-permutation/)
*/


class Solution {
    public int[] buildArray(int[] nums) {
        int[] ret = new int[nums.length];
        for(int i=0;i<nums.length;i++){
            ret[i] = nums[nums[i]];
        }
        return ret;

    }
}