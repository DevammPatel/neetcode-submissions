class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<vector<int>> result;
        
        for(int i=0;i<nums.size();i++){
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int left=i+1, right=nums.size() - 1;
            int target = -nums[i];

            while(left<right){
                int currsum = nums[left]+nums[right];

                if(currsum<target){
                    left++;
                }
                else if(currsum>target){
                    right--;
                }
                else{
                    result.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;

                    while(left<right && nums[left] == nums[left-1]){
                        left++;
                    }
                }
            }
        }
        return result;
    }
};
