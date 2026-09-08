class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int ls = 0;
        int rs = 0;
        int maxs = 0;
        for(int i = 0;i<=k-1;i++){
            ls = ls + nums[i];
            maxs = ls;
        }
        int rightindex = nums.size()-1;
        for(int i = k-1;i>=0;i--){
            ls = ls - nums[i];
            rs = rs + nums[rightindex];
            rightindex = rightindex-1;
            maxs = max(maxs,ls+rs);
        }
        return maxs;
    }
};