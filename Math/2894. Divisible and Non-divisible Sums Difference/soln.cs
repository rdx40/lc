public class Solution {
    public int sOD(int n, int m){
        int cnt = n/m;
        return cnt*(cnt+1)*m/2;
    }
    public int DifferenceOfSums(int n, int m) {
        int totSum = n*(n+1)/2;
        int divSum = sOD(n, m);
        int nonSum = totSum - divSum;
        return nonSum - divSum;        
    }
}
