class Solution {
public:
    long long countCommas(long long n) {
        long long pro = 1000;
        long long ans = 0;
        if(n<1000){
            return 0;
        }
        while(pro<=n){
            ans = ans + n - pro+1;
            pro*=1000;
        }
        return ans;
    }
};