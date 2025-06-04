class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0;
        for(int i=1;i<s.length();i++){
            ans += abs(s[i] - s[i-1]);
        }       
        return ans;
        
    }
};
// Time Complexity: O(n), where n is the length of the string
// Space Complexity: O(1), no extra space is used
//Above logic in C, Java, C# and GO has been implemtned below
// C
// int scoreOfString(char* s) {
//     int ans = 0;
//     for(int i=1;s[i]!='\0';i++){
//         ans += abs(s[i] - s[i-1]);
//     }
//     return ans;
// }
// Java
// class Solution {
//     public int scoreOfString(String s) {
//         int ans = 0;
//         for(int i=1;i<s.length();i++){
//             ans += Math.abs(s.charAt(i) - s.charAt(i-1));
//         }
//         return ans;
//     }
// }
