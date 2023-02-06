class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector <int> v;
        for(int i = 0;i < nums.size();i++) {
            int complement = target - nums[i];
            if(mp.find(complement) != mp.end()) {
                v.push_back(mp[complement]);
                v.push_back(i);
                break;
            }
            else
                mp.insert({nums[i],i});
        }
        return v;
    }
};