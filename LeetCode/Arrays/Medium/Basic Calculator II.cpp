// 227. Basic Calculator II
// Given a string s which represents an expression, evaluate this expression and return its value. 

// The integer division should truncate toward zero.

// You may assume that the given expression is always valid. All intermediate results will be in the range of [-231, 231 - 1].

// Note: You are not allowed to use any built-in function which evaluates strings as mathematical expressions, such as eval().

// Example 1:

// Input: s = "3+2*2"
// Output: 7
Code Below:
class Solution {
public:
    int calculate(string s) {
        stack<int> st;
            int stringSize = s.size();
            char sign = '+';
            for (int i = 0; i < stringSize; i++){
                char ch = s[i];
                if(isdigit(ch)){
                    int val=0,pop, ans;
                    while (i<stringSize && isdigit(s[i])){
                        val = val*10 + (s[i]-'0');
                        i++;
                    }
                    i--;
                    if(sign == '+'){
                        st.push(val);
                    }
                    else if(sign == '-'){
                        st.push(-val);
                    }
                    else if(sign == '*'){
                        pop = st.top();
                        ans = pop*val;
                        st.pop();
                        st.push(ans);
                    }
                    else if(sign == '/'){
                        pop = st.top();
                        ans = pop/val;
                        st.pop();
                        st.push(ans);
                    }
                }
                else if(ch!= ' '){
                    sign = ch;
                }
            }
            int res = 0;
            while(!st.empty()){
                res+=st.top();
                st.pop();
            }
            return res;
    }
};