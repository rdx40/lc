/*
Solution to 1512. Number of Good Pairs(https://leetcode.com/problems/number-of-good-pairs/description/)

*/

int numIdenticalPairs(int* nums, int numsSize) {
    
    int cnt = 0;
    int freq[101] = {0};

    for(int i=0;i<numsSize;i++){
        cnt += freq[nums[i]]++;
    }
    return cnt;
}