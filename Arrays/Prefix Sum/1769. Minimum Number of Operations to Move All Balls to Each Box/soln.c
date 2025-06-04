// brute
int* minOperations(char* boxes, int* returnSize) {
    int n = strlen(boxes);
    int* res = (int *)malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        res[i] = 0;
        for(int j=0;j<n;j++){
            if(boxes[j]=='1'){
                res[i] += abs(i-j);
            }
        }
    }


    *returnSize = n;
    return res;
}



//optimized?
int* minOperations(char* boxes, int* returnSize) {
    int n = strlen(boxes);
    int* result = (int*)calloc(n, sizeof(int));
    *returnSize = n;
    int count = 0;
    int ops = 0;
    for (int i = 0; i < n; i++) {
        result[i] += ops;
        if (boxes[i] == '1') {
            count++;
        }
        ops += count;
    }
    count = 0;
    ops = 0;
    for (int i = n - 1; i >= 0; i--) {
        result[i] += ops;
        if (boxes[i] == '1') {
            count++;
        }
        ops += count;
    }

    return result;
}


//optimized 2?
int* minOperations(char* boxes, int* returnSize) {
    int n = strlen(boxes);
    int* result = (int*)calloc(n, sizeof(int));
    *returnSize = n;
    int ballsToLeft = 0, movesToLeft = 0;
    int ballsToRight = 0, movesToRight = 0;
    for (int i = 0; i < n; i++) {
        result[i] += movesToLeft;
        ballsToLeft += boxes[i] - '0';
        movesToLeft += ballsToLeft;
        int j = n - 1 - i;
        result[j] += movesToRight;
        ballsToRight += boxes[j] - '0';
        movesToRight += ballsToRight;
    }
    return result;
}