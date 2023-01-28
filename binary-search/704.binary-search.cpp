class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0,end = nums.size()-1,mid,flag = 0;
        while(start <= end)
        {
            mid = start + (end-start)/2;
            if(nums[mid] == target)
            {
                flag = 1;
                break;
            }
            else if(nums[mid] > target)
                end = mid - 1;
            else start = mid + 1;
        }
        if(flag == 0)
            return -1;
        else return mid;
    }
};