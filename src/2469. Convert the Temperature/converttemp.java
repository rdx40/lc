##Solution to 2469. Convert the Temperature(https://leetcode.com/problems/convert-the-temperature/description/) in Java

class Solution {
    public double[] convertTemperature(double celsius) {
        return new double[] {celsius+273.15, celsius*1.8+32};        
    }
}