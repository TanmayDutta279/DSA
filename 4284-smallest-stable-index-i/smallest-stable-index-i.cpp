class Solution {
public:
    int maxi(vector<int> nums,int n){
        int maxx = INT_MIN;
        for(int i = 0;i<=n;i++){
            if(nums[i]>maxx){
                maxx = nums[i];
            }
        }
        return maxx;
    }
    int mini(vector<int> nums,int n){
        int minn = INT_MAX;
        for(int i = n;i<nums.size();i++){
            if(nums[i]<minn){
                minn = nums[i];
            }
        }
        return minn;
    }
    int firstStableIndex(vector<int>& nums, int k) {
        int minimum = INT_MAX;
        for(int i = 0;i<nums.size();i++){
            int m = maxi(nums,i);
            int n = mini(nums,i);
            int ans = m - n;
            if(ans<=k){
                return i;
            }
        }
        return -1;
    }
};