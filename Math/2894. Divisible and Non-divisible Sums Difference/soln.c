int sumDivisibleBy(int n, int m) {
    int count = n / m;
    return m * count * (count + 1) / 2;
}
int differenceOfSums(int n, int m) {
    int totalSum = n * (n + 1) / 2;
    int divisibleSum = sumDivisibleBy(n, m);
    int nonDivisibleSum = totalSum - divisibleSum;
    return nonDivisibleSum - divisibleSum;
}
