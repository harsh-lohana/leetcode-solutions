class Solution 
{
public:
    bool isValid(string s) 
    {
        stack<char> st;
        int i;
        for(i = 0;i < s.size();i++)
        {
            if(s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if(st.empty())
                    return false;
                if(s[i] == ')' && st.top() != '(')
                    return false;
                if(s[i] == '}' && st.top() != '{')
                    return false;
                if(s[i] == ']' && st.top() != '[')
                    return false;
                st.pop();
            }
            else
                st.push(s[i]);
        }
        if(!st.empty())
            return false;
        return true;
    }
};