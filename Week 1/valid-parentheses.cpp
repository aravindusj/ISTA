https://leetcode.com/problems/valid-parentheses/


class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2!=0)
        {
            return false;
        }
        int c[3]={0};
        stack <char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                st.push('(');
                c[0]++;
            }
            else if(s[i]==')')
            {
                if(st.empty())
                {
                    return false;
                }
                if(st.top()=='(')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            if(s[i]=='{')
            {
                st.push('{');
                c[1]++;
            }
            else if(s[i]=='}')
            {
                if(st.empty())
                {
                    return false;
                }
                if(st.top()=='{')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            if(s[i]=='[')
            {
                st.push('[');
                c[2]++;
            }
            else if(s[i]==']')
            {
                if(st.empty())
                {
                    return false;
                }
                if(st.top()=='[')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if(st.empty())
        {
            return true;
        }
        return false;
    }
};