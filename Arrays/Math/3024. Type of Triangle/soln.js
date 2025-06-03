/**
 * @param {number[]} nums
 * @return {string}
 */
var triangleType = function (nums) {
  if (!isTriangle(nums)) return "none";
  if (isEquilateral(nums)) return "equilateral";
  if (isIsosceles(nums)) return "isosceles";
  return "scalene";
};

function isTriangle(nums) {
  const [a, b, c] = nums;
  return a + b > c && a + c > b && b + c > a;
}

function isEquilateral(nums) {
  return nums[0] === nums[1] && nums[1] === nums[2];
}

function isIsosceles(nums) {
  return nums[0] === nums[1] || nums[1] === nums[2] || nums[0] === nums[2];
}
