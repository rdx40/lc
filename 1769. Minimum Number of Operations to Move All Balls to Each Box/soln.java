class Solution {
    public int[] minOperations(String boxes) {
        int n = boxes.length();
        int[] result = new int[n];
        int ballsToLeft = 0, movesToLeft = 0;
        int ballsToRight = 0, movesToRight = 0;
        for (int i = 0; i < n; i++) {
            result[i] += movesToLeft;
            ballsToLeft += boxes.charAt(i) - '0';
            movesToLeft += ballsToLeft;
        }
        for (int i = n - 1; i >= 0; i--) {
            result[i] += movesToRight;
            ballsToRight += boxes.charAt(i) - '0';
            movesToRight += ballsToRight;
        }
        return result;
    }
}
