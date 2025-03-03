int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    int* less = (int*)malloc(numsSize * sizeof(int));
    int* equal = (int*)malloc(numsSize * sizeof(int));
    int* greater = (int*)malloc(numsSize * sizeof(int));
    int lessIndex = 0, equalIndex = 0, greaterIndex = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < pivot) {
            less[lessIndex++] = nums[i];
        } else if (nums[i] == pivot) {
            equal[equalIndex++] = nums[i];
        } else {
            greater[greaterIndex++] = nums[i];
        }
    }
    *returnSize = lessIndex + equalIndex + greaterIndex;
    int* result = (int*)malloc((*returnSize) * sizeof(int));
    int index = 0;
    for (int i = 0; i < lessIndex; i++) {
        result[index++] = less[i];
    }
    for (int i = 0; i < equalIndex; i++) {
        result[index++] = equal[i];
    }
    for (int i = 0; i < greaterIndex; i++) {
        result[index++] = greater[i];
    }
    free(less);
    free(equal);
    free(greater);

    return result;
}


