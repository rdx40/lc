#include <stdio.h>

int count(unsigned x) {
    int count = 0;
    while (x) {
        count += x & 1;
        x >>= 1;
    }
    return count;
}

int minimizeXor(int num1, int num2) {
    int kMaxBit = 30;
    int bits = count(num2);  

    if (count(num1) == bits) {
        return num1;
    }

    int ans = 0;  

    for (int i = kMaxBit; i >= 0; --i) {
        if ((num1 >> i) & 1) {  
            ans |= (1 << i);  
            if (--bits == 0) {
                return ans;
            }
        }
    }

    for (int i = 0; i < kMaxBit; ++i) {
        if (((num1 >> i) & 1) == 0) {  
            ans |= (1 << i);  
            if (--bits == 0) { 
                return ans;
            }
        }
    }

    return ans;  
}

// int main() {
//     int num1 = 5;
//     int num2 = 3;
    
//     printf("%d",minimizeXor(num1, num2));
//     return 0;
// }

