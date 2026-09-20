class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length()!=t.length()) return false; 

        unordered_map<char,int> cnt_s;
        unordered_map<char,int> cnt_t;

        for(int i=0;i<s.length();i++){
            cnt_s[s[i]]++;
            cnt_t[t[i]]++;
        }

        return cnt_s == cnt_t;
    }
};
