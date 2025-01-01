//Solution to 1422. Maximum Score After Splitting a String(https://leetcode.com/problems/maximum-score-after-splitting-a-string/)


int maxScore(char* s) {
    int ans = 0;
    int zeros = 0;
    int ones = 0;

    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='1')
            ones++;
    }
    for(int i=0;s[i+1]!='\0';i++){
        if(s[i]=='0')
            zeros++;
        else
            ones--;

        int score = zeros+ones;
        if(score>ans){
            ans = score;
        }

    }
    return ans;
}





