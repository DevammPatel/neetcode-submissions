class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char, char> ideal = {{')', '('}, {']', '['}, {'}', '{'} };

        for(char c : s){
            if(ideal.count(c)) {
                if(!stk.empty() && stk.top() == ideal[c]){
                    stk.pop();
                }
                else{
                    return false;
                }
            }
            else{
                stk.push(c);
            }
        }
        return stk.empty();
    }
};
