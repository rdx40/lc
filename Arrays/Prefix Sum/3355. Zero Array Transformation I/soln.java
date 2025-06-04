class soln {
    public boolean isZeroArray(int[] nums, int[][] queries) {
        int n = nums.length;
        int[] diff = new int[n + 1];
        for (int[] q : queries) {
            int l = q[0], r = q[1];
            diff[l] += 1;
            if (r + 1 < n) {
                diff[r + 1] -= 1;
            }
        }
        int[] availableDecrements = new int[n];
        availableDecrements[0] = diff[0];
        for (int i = 1; i < n; i++) {
            availableDecrements[i] = availableDecrements[i - 1] + diff[i];
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] > availableDecrements[i]) {
                return false;
            }
        }

        return true;
    }
}
