//Solution to 1422. Maximum Score After Splitting a String(https://leetcode.com/problems/maximum-score-after-splitting-a-string/)





class Solution {
    public int maxScore(String s) {

        int ans =0,zero=0;
        int totalOnes = 0;

        for(char c : s.toCharArray()){
            if(c=='1')
                totalOnes++;
        }

        for(int i=0;i<s.length()-1;i++){
            if(s.charAt(i)=='0'){
                ++zero;
            }
            else{
                --totalOnes;
            }
            ans = Math.max(ans, zero+totalOnes);
        }
        return ans;
        
    }
}


