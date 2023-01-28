class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int i,sum = 0,left = 0,right = 0;
        for(i = 0;i < nums.size();i++)
            sum += nums[i];
        for(i = 0;i < nums.size();i++)
        {
            right = sum - nums[i] - left;
            if(left == right)
                return i;
            left += nums[i];
        }
        return -1;
    }
};