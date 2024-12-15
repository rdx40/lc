/*
solution for 3110.Score of a String (https://leetcode.com/problems/score-of-a-string/description/) 
using java

*/
class Solution {
    public int scoreOfString(String s) {

        int sum = 0;
        for (int i=1;i<s.length();i++){
            sum+=Math.abs(s.charAt(i)-s.charAt(i-1));
        }
        return sum;
    }
}