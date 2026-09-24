class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        for(int i=0;i<numbers.size();i++){
            int left = i+1, right = numbers.size()-1;
            int new_target = target - numbers[i];

            while(left<=right){
                int mid = left + (right-left)/2;

                if(numbers[mid]==new_target){
                    return {i+1, mid+1};
                }
                else if(numbers[mid]<new_target){
                    left = mid+1;
                }
                else {
                    right=mid-1;
                }
            }
            
        }
        return {};
    }
};
