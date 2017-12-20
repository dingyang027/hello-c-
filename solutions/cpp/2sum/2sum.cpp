class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        for(int i=0; i<r; i++){
            for(int j=r; j>i; j--){
                if(nums[i] + nums[j] == target){
                    vector<int> ans{i, j};
                    return ans;
            }
            }
        }
    }
};
