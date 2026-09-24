class Solution {
public:
    bool isPalindrome(string s) {
        string copy = "";
        int n = s.length();
        for(char c : s){
            if(isalnum(c)) copy+=tolower(c);
        }
        return copy == string(copy.rbegin(), copy.rend());
    }
};
