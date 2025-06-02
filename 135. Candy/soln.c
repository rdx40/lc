int candy(int* ratings, int ratingsSize) {
    if (ratingsSize == 0) return 0;

    int* candies = (int*)malloc(sizeof(int) * ratingsSize);
    for (int i = 0; i < ratingsSize; i++) {
        candies[i] = 1;
    }
    for (int i = 1; i < ratingsSize; i++) {
        if (ratings[i] > ratings[i - 1]) {
            candies[i] = candies[i - 1] + 1;
        }
    }
    for (int i = ratingsSize - 2; i >= 0; i--) {
        if (ratings[i] > ratings[i + 1]) {
            if (candies[i] < candies[i + 1] + 1) {
                candies[i] = candies[i + 1] + 1;
            }
        }
    }
    int total = 0;
    for (int i = 0; i < ratingsSize; i++) {
        total += candies[i];
    }
    return total;
}
