class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> count;
        int result=0, left=0, maxf=0;

        for(int right=0;right<s.size();right++){
            count[s[right]]++;

            maxf = max(maxf, count[s[right]]);

            while(right-left+1 - maxf > k){
                count[s[left]]--;
                left++;
            }
            result = max(result, right-left+1);
        }
        return result;
    }
};
