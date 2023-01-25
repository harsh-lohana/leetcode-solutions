class Solution 
{
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        vector<int> ans;
        int i,n = nums.size();
        for(i = 0;i < n;i++)
            ans.push_back(nums[i]);
        for(i = n;i < 2*n;i++)
            ans.push_back(nums[i-n]);
        return ans;
    }
};