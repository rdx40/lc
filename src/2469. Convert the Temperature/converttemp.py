##Solution to 2469. Convert the Temperature(https://leetcode.com/problems/convert-the-temperature/description/)


class Solution:
    def convertTemperature(self, celsius: float) -> List[float]:
        return [273.15+celsius, (9/5)*celsius+32]