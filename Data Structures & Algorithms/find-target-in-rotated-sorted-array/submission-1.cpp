class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0, right = nums.size()-1;
        
        while(left<right){
            int mid = (left+right)/2;

            if(nums[mid] > nums[right]){
                left = mid+1;
            }
            else{
                right = mid;
            }
        }

        int min = left;
        left = 0, right = nums.size()-1;

        if(target >= nums[min] && target <= nums[right]){
            left = min;
        }
        else{
            right = min-1;
        }

        while(left<=right){
            int mid = (left+right)/2;

            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return -1;
    }
};
