class Solution {
public:
    bool check(vector<int>& nums) {
        int i,count=0,n=nums.size();
        for(i=1;i<n;i++)
        {
            if(nums[i-1]>nums[i])
                count++;
        }
        if(nums[n-1]>nums[0])
            count++;
        return count<=1;
    }
};