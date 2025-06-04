#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

bool isZeroArray(int* nums, int numsSize, int** queries, int queriesSize, int* queriesColSize){
    int *diff = (int *)calloc(numsSize+1, sizeof(int));
    for(int i=0;i<queriesSize; i++){
        int l = queries[i][0];
        int r = queries[i][1];
        diff[l] += 1;
        if( r+1 < numsSize){
            diff[r+1] -= 1;
        }
    }
    int curr = 0;
    for(int i=0;i<numsSize; i++){
        curr += diff[i];
        if(nums[i]>curr){
            return false;
            free(diff);
        }
    }   
    return true;
    free(diff);
}


int main() {
    int numsSize, queriesSize;
    printf("Enter the size of nums array: ");
    scanf("%d", &numsSize);
    int* nums = (int*)malloc(numsSize * sizeof(int));
    printf("Enter the elements of nums array: ");
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter the number of queries: ");
    scanf("%d", &queriesSize);
    int** queries = (int**)malloc(queriesSize * sizeof(int*));
    int* queriesColSize = (int*)malloc(queriesSize * sizeof(int));
    for (int i = 0; i < queriesSize; i++) {
        queries[i] = (int*)malloc(2 * sizeof(int));
        printf("Enter query %d (two integers for range [l, r]): ", i + 1);
        scanf("%d %d", &queries[i][0], &queries[i][1]);
        queriesColSize[i] = 2;
    }

    bool result = isZeroArray(nums, numsSize, queries, queriesSize, queriesColSize);
    printf("Result: %s\n", result ? "true" : "false");

    free(nums);
    for (int i = 0; i < queriesSize; i++) {
        free(queries[i]);
    }
    free(queries);
    free(queriesColSize);

    return 0;
}