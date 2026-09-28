class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int maxi = 0;
        int op = 0;
        for(int i = 0;i<n;i++){
            if(s[i]=='('){
                op++;
                maxi = max(op,maxi);
            }
            else if(s[i]==')'){
                op--;
            }
        }
        return maxi;
    }
};