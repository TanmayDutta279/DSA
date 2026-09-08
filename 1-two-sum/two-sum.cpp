class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> st;
        for(int j=0;j<nums.size();j++)
        {
           int ans=target-nums[j];
           if( st.find(ans)!=st.end())
           {
            return {j,st[ans]};
           }
            st[nums[j]] = j;
        }
        return {-1};
     }
};