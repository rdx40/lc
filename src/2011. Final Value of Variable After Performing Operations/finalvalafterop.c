/*
Solution to 2011. Final Value of Variable After Performing Operations(https://leetcode.com/problems/final-value-of-variable-after-performing-operations/description/)
*/


int finalValueAfterOperations(char** operations, int operationsSize) {
    int ret = 0;

    for(int i=0;i<operationsSize;i++){
        if(operations[i][1] == '+'){
            ret++;
        }
        else
            ret--;

    }
return ret;
    
}