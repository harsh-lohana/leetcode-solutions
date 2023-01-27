class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i,sum = 0,maxSum = nums[0];
        for(i = 0;i < nums.size();i++)
        {
            sum += nums[i];
            maxSum = max(sum,maxSum);
            if(sum < 0)
                sum = 0;
        }
        return maxSum;
    }
};