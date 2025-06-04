#include <iostream>
#include <vector>
#include <algorithm> // For std::sort
#include <string>    // For std::string

using namespace std;

class Solution {
 public:
  string triangleType(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    if (nums[0] + nums[1] <= nums[2])
      return "none";
    if (nums[0] == nums[1] && nums[1] == nums[2])
      return "equilateral";
    if (nums[0] == nums[1] || nums[1] == nums[2])
      return "isosceles";
    return "scalene";
  }
};

int main() {
  Solution solution;
  vector<int> nums(3);

  // Input for triangle sides
  cout << "Enter the three sides of the triangle: ";
  for (int i = 0; i < 3; i++) {
    cin >> nums[i];
  }

  // Call the function and print the result
  string result = solution.triangleType(nums);
  cout << "Triangle type: " << result << endl;

  return 0;
}