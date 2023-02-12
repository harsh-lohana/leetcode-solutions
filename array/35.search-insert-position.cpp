class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0,end = nums.size()-1,mid,flag = 0,ans;
        while(start <= end)
        {
            mid = start + (end-start)/2;
            if(nums[mid] > target)
                end = mid - 1;
            else if(nums[mid] < target)
                start = mid + 1;
            else
                return mid;
        }
        return start;
    }
};