class Solution {
public:
    string minWindow(string s, string t) {

        if(t.empty()){
            return "";
        }

        unordered_map<char,int> cntT, window;

        for(char c:t){
            cntT[c]++;
        }

        int have=0, need = cntT.size();
        pair<int, int> result = {-1,-1};

        int reslen = INT_MAX;
        int left=0;

        for(int right=0;right<s.length();right++){
            char c = s[right];
            window[c]++;

            if(cntT.count(c) && window[c] == cntT[c]){
                have++;
            }

            while(have == need){
                if(right-left+1  < reslen){
                    reslen = right-left+1;
                    result = {left,right};
                }
                window[s[left]]--;
                if(cntT.count(s[left]) && window[s[left]] < cntT[s[left]]){
                    have--;
                }
                left++;
            }   
        }

        return reslen == INT_MAX ? "" : s.substr(result.first, reslen);
    }
};
