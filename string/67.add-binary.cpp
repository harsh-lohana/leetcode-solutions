class Solution 
{
public:
    string addBinary(string a, string b) 
    {
        string ans;
        int i = a.length()-1,j = b.length()-1,sum = 0,carry = 0;
        while(i >= 0 || j>=0 || carry!=0)
        {
            int val1 = 0;
            if(i >= 0)
                val1 = a[i]-'0';
            int val2 = 0;
            if(j >= 0)
                val2 = b[j]-'0';
            sum = val1 + val2 + carry;
            carry = sum / 2;
            sum %= 2;
            ans.push_back(sum + '0');
            i--;
            j--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};