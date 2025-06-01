long long choose2(long long x) {
    if (x < 0) return 0;
    return (x + 2) * (x + 1) / 2;
}

long long distributeCandies(int n, int limit) {
    long long a = choose2(n);
    long long b = choose2(n - (limit + 1));
    long long c = choose2(n - 2 * (limit + 1));
    long long d = choose2(n - 3 * (limit + 1));

    return a - 3 * b + 3 * c - d;
}
