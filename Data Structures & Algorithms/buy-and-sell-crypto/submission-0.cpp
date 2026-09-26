class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result=0;
        int left=0, right=1;

        while(right<prices.size()){
        
            if(prices[left] < prices[right]){
                int profit = prices[right] - prices[left];
                result=max(result, profit);
            }

            else{
                left=right;
            }
            right++;
        }

        return result;
    }
};
