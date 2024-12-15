/* Solution of 1920. Build Array from Permutation (https://leetcode.com/problems/build-array-from-permutation/description/) in C
*/



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {

    int* ret = (int*)malloc(numsSize*sizeof(int));

    for(int i=0;i<numsSize;i++){
        ret[i] = nums[nums[i]];
    }
    
    *returnSize = numsSize;
    return ret;
}