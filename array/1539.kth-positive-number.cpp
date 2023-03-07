class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        arr.push_back(-1);
        vector<int> v;
        int curr = 1;
        int i = 0;
        int n = arr.size();
        while(v.size() <= k) {
            if(arr[i] == curr && i != n)
                i++;
            else
                v.push_back(curr);
            curr++;
        }
        return v[k-1];
    }
};