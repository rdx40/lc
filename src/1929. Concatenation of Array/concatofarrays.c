/*
1929. Concatenation of Array (https://leetcode.com/problems/concatenation-of-array/) 
using C

*/


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* getConcatenation(int* nums, int numsSize, int* returnSize){
    int* ret = (int*)malloc(2*numsSize*sizeof(int));

    for(int i=0;i<numsSize;i++){
        ret[i] = nums[i];
    }
    for(int i=0;i<numsSize;i++){
        ret[numsSize+i]=nums[i];
    }
    *returnSize = 2 * numsSize;
    return ret;
    
}
