class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> cnt;

        for(int n : nums){
            cnt[n] = 1 + cnt[n];
        }

        vector<vector<int>> freq(nums.size() + 1);

        for(const auto& p : cnt){
            freq[p.second].push_back({p.first});
        }

        vector<int> res;
        for(int i= freq.size() - 1; i>0; --i){
            for(int n:freq[i]){
                res.push_back(n);
                if(res.size() == k){
                    return res;
                }
            }
        }

        return res;
    }
};
