class Solution {

    /**
     * @param Integer[] $nums
     * @return String
     */
    function triangleType($nums) {
        sort($nums);
        if(!$this->isTriangle($nums)) return "none";
        if($this->isEquilateral($nums)) return "equilateral";
        if($this->isIsosceles($nums)) return "isosceles";
        return "scalene";
    }
    private function isTriangle($nums){
        return $nums[0] + $nums[1] > $nums[2] &&
        $nums[0] + $nums[2] > $nums[1] &&
        $nums[1] + $nums[2] > $nums[0];
    }
    private function isEquilateral($nums){
        return $nums[0] == $nums[1] && $nums[1] == $nums[2];
    }

    private function isIsosceles($nums){
        return $nums[0] == $nums[1] || $nums[1] == $nums[2] || $nums[0] == $nums[2];
    }
}