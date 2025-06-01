class Solution {
    public long distributeCandies(int n, int limit) {
        return countUnboundedSolutions(n)
             - 3 * countUnboundedSolutions(n - (limit + 1))
             + 3 * countUnboundedSolutions(n - 2 * (limit + 1))
             - countUnboundedSolutions(n - 3 * (limit + 1));
    }
    private long countUnboundedSolutions(long sum) {
        if (sum < 0) return 0;
        return (sum + 2) * (sum + 1) / 2;
    }
}
