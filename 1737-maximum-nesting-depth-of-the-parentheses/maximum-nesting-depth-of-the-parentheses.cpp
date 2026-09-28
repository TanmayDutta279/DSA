class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int ans = 0;
        for(char c:s){
            if(c == '('){
                st.push(c);
            }
            else if(c == ')'){
                st.pop();
            }
            int n = st.size();
            ans = max(ans,n);
        }
        return ans;
    }
};