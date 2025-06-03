using namespace std;
class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int differenceArray[n+1];
        memset(differenceArray, 0, sizeof(differenceArray));

        for(const auto&query : queries){
            int left = query[0], right = query[1];
            ++differenceArray[left];
            --differenceArray[right+1];
        }

        int currentSum = 0;
        for(int i=0; i<n;i++){
            currentSum += differenceArray[i];
            if(nums[i] > currentSum){
                return false;
            }
        }                
        return true;
    }
};