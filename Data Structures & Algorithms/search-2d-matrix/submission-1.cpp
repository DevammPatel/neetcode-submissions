class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) { 
        
        int t_row = matrix.size(), t_col = matrix[0].size();

        int top=0, bot = t_row-1;
        while(top<=bot){
            int row=(top+bot)/2;

            if(target>matrix[row][t_col - 1]){
                top = row+1;
            }
            else if(target<matrix[row][0]){
                bot = row-1;
            }
            else{
                break;
            }
        }

        if(!(top<=bot)){
            return false;
        }

        int row=(top+bot)/2;
        int left=0, right=t_col-1;

        while(left<=right){
            int mid=(left+right)/2;

            if(target > matrix[row][mid]){
                left=mid+1;
            }
            else if(target < matrix[row][mid]){
                right = mid-1;
            }
            else{
                return true;
            }
        }

        return false;
    }
};
