class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int> freq;
        unordered_map<int,int> freqcnt;
        for(int n:nums){
            freq[n]++;
        }
        for(auto i:freq){
            freqcnt[i.second]++;
        }
        for(int i = 0;i<nums.size();i++){
            if(freqcnt[freq[nums[i]]]==1){
                return nums[i];
            }
        }
        return -1;
    }
};