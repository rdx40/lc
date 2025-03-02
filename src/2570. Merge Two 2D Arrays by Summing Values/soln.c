/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** mergeArrays(int** nums1, int nums1Size, int* nums1ColSize, int** nums2, int nums2Size, int* nums2ColSize, int* returnSize, int** returnColumnSizes) {

    int i=0,j=0;
    int maxSize = nums1Size + nums2Size;
    int** result = (int**)malloc(maxSize*sizeof(int*));

    *returnColumnSizes = (int*)malloc(maxSize*sizeof(int));

    *returnSize = 0;
    
    while (i < nums1Size && j < nums2Size) {
        if (nums1[i][0] < nums2[j][0]) {
            result[*returnSize] = (int*)malloc(2 * sizeof(int));
            result[*returnSize][0] = nums1[i][0];
            result[*returnSize][1] = nums1[i][1];
            (*returnColumnSizes)[*returnSize] = 2;
            (*returnSize)++;
            i++;
        } else if (nums1[i][0] > nums2[j][0]) {
            
            result[*returnSize] = (int*)malloc(2 * sizeof(int));
            result[*returnSize][0] = nums2[j][0];
            result[*returnSize][1] = nums2[j][1];
            (*returnColumnSizes)[*returnSize] = 2;
            (*returnSize)++;
            j++;
        } else {
            result[*returnSize] = (int*)malloc(2 * sizeof(int));
            result[*returnSize][0] = nums1[i][0];
            result[*returnSize][1] = nums1[i][1] + nums2[j][1];
            (*returnColumnSizes)[*returnSize] = 2;
            (*returnSize)++; 
            i++;
            j++;
        }
    }

    while (i < nums1Size) {
        result[*returnSize] = (int*)malloc(2 * sizeof(int));
        result[*returnSize][0] = nums1[i][0];
        result[*returnSize][1] = nums1[i][1];
        (*returnColumnSizes)[*returnSize] = 2;
        (*returnSize)++;
        i++;
    }

    
    while (j < nums2Size) {
        result[*returnSize] = (int*)malloc(2 * sizeof(int));
        result[*returnSize][0] = nums2[j][0];
        result[*returnSize][1] = nums2[j][1];
        (*returnColumnSizes)[*returnSize] = 2;
        (*returnSize)++;
        j++;
    }
        return result;  
}

