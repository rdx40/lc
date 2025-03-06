class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {

        int n = grid.length;

        int[] count = new int[n*n+1];

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                count[grid[i][j]]++;
            }
        }

        int doubleNum = 0;
        int missingNum = 0;

        for(int num = 1; num<= n*n; num++){
            if(count[num] == 0){
                missingNum = num;
            }
            else if(count[num] == 2){
                doubleNum = num;
            }
        }
        
        return new int[]{doubleNum, missingNum};
    }
}
