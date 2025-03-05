class Solution:
  def coloredCells(self, n: int) -> int:
    return 4*(n*(n-1)//2)+ 1
OR
class Solution:
  def coloredCells(self, n: int) -> int:
    return n**2 + (n - 1)**2