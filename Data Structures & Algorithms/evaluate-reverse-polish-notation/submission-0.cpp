class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;

        for(const string& c : tokens){
            if(c=="+"){
                int a = stk.top();
                stk.pop();
                int b = stk.top();
                stk.pop();
                int sum = a+b;
                stk.push(sum);
            }

            else if(c=="-"){
                int a = stk.top();
                stk.pop();
                int b = stk.top();
                stk.pop();
                int sub = b-a;
                stk.push(sub);
            }

            else if(c=="*"){
                int a = stk.top();
                stk.pop();
                int b = stk.top();
                stk.pop();
                int mul = a*b;
                stk.push(mul);
            }
            
            else if(c=="/"){
                int a = stk.top();
                stk.pop();
                int b = stk.top();
                stk.pop();
                int div = b/a;
                stk.push(div);
            }

            else{
                stk.push(stoi(c));
            }
        }
        return stk.top();
    }
};
