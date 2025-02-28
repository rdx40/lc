int maxArea(int* height, int heightSize) {
    int ans = 0;
    int l = 0;
    int r = heightSize - 1;

    while(l<r){
        int minHeight = (height[l] < height[r]) ? height[l]: height[r];
        ans = (ans > minHeight * (r - l)) ? ans : minHeight * (r - l);
        if (height[l] < height[r])
            ++l;
        else
            --r;
    }
    return ans;        
}
