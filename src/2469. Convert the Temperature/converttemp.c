##Solution to 2469. Convert the Temperature(https://leetcode.com/problems/convert-the-temperature/description/) in C


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {

    double* ret = (double*)malloc(2*sizeof(double));
    ret[0] = celsius+273.15;
    ret[1] = celsius*(1.8) + 32.00;
    *returnSize = 2;
    return ret;
    
}