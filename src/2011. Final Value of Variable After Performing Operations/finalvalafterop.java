/*
Solution to 2011. Final Value of Variable After Performing Operations(https://leetcode.com/problems/final-value-of-variable-after-performing-operations/description/)
*/
class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int ret = 0;

        for (String s : operations)
            ret += s.charAt(1) == '+' ? 1:-1;

        return ret;        
    }
}


