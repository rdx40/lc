bool isTriangle(int* nums) {
    return nums[0] + nums[1] > nums[2] &&
           nums[0] + nums[2] > nums[1] &&
           nums[1] + nums[2] > nums[0];
}

bool isEquilateral(int* nums) {
    return nums[0] == nums[1] && nums[1] == nums[2];
}

bool isIsosceles(int* nums) {
    return nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2];
}

char* triangleType(int* nums, int numsSize) {
    if (numsSize != 3) return "invalid";
    if (!isTriangle(nums)) return "none";
    if (isEquilateral(nums)) return "equilateral";
    if (isIsosceles(nums)) return "isosceles";
    return "scalene";
}
