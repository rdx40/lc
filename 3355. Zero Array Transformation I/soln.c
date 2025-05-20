    #include <stdbool.h>
    #include <stdlib.h>

    bool isZeroArray(int* nums, int numsSize, int** queries, int queriesSize, int* queriesColSize) {
        int* diff = (int*)calloc(numsSize + 1, sizeof(int));
        for (int i = 0; i < queriesSize; i++) {
            int l = queries[i][0];
            int r = queries[i][1];
            diff[l] += 1;
            if (r + 1 < numsSize) {
                diff[r + 1] -= 1;
            }
        }
        int curr = 0;
        for (int i = 0; i < numsSize; i++) {
            curr += diff[i];
            if (nums[i] > curr) {
                free(diff);
                return false;
            }
        }
        return true;
    }
