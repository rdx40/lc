/*
solution for 3110.Score of a String (https://leetcode.com/problems/score-of-a-string/description/) 
using C

*/

int scoreOfString(char* s) {
    int ans = 0;
    for (int i = 1; s[i] != '\0'; i++) {
        if ((s[i] - s[i - 1]) < 0) {
            ans -= (s[i] - s[i - 1]);
        } else {
            ans += (s[i] - s[i - 1]);
        }
    }
    
    return ans;
}
