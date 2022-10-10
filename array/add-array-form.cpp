class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size();
        int i=n-1,carry=0,sum;
        vector<int> ans;
        while(i>=0)
        {   
            if(i==n-1)
                sum=num[i]+k;
            else
                sum=num[i]+carry;
            carry=sum/10;
            sum%=10;
            ans.push_back(sum);
            i--;
        }
        while(carry!=0)
        {
            sum=carry;
            carry=sum/10;
            sum%=10;
            ans.push_back(sum);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};