class Solution 
{
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        vector<int> ans;
        int i = digits.size()-1,carry = 0,sum = 0,flag = 0;
        while(i >= 0)
        {
            if(flag == 0)
            {
                sum = digits[i] + 1;
                flag = 1;
            }
            else
                sum = digits[i] + carry;
            carry = sum / 10;
            sum %= 10;
            ans.push_back(sum);
            i--;
        }
        while(carry!=0)
        {
            sum = carry;
            carry = sum / 10;
            sum %= 10;
            ans.push_back(sum);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};