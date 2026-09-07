class Solution {
public:
    bool checkprime(int n){
        int count = 0;
        if(n<=1){
            return false;
        }
        for(int i = 2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int n:nums){
            mp[n]++;
        }
        for(auto i:mp){
            if(checkprime(i.second)){
                return true;
            }
        }
        return false;
    }
};