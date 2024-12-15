/*
Solution to 1512. Number of Good Pairs(https://leetcode.com/problems/number-of-good-pairs/description/)
*/



class Solution {
    public int numIdenticalPairs(int[] nums) {

        int cnt = 0;
        int[] freq = new int[101]; //cos max size is 100 given
        for (int i: nums){
            cnt += freq[i]++;
        }
        return cnt;
        
    }
}