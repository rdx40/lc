/**
solution for 1929. Concatenation of Array (https://leetcode.com/problems/concatenation-of-array/) 
using java

**/


class Solution {
    public int[] getConcatenation(int[] nums) {
        int[] ret = new int[nums.length*2];

        for(int i=0;i<nums.length;i++){
            ret[i] = nums[i];
        }
        for(int i=0;i<nums.length;i++){
            ret[nums.length+i] = nums[i];
        }

        return ret;

        
    }
}

