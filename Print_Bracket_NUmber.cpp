class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        stack<int>st;
        int cnt=0;
        vector<int>ans;
        for(int i=0;i<str.size();i++){
            if(str[i]=='('){
                cnt++;
                st.push(cnt);
                ans.push_back(cnt);
            }else{
                if(str[i]==')'){
                    ans.push_back(st.top());
                    st.pop();
                }
            }
        }
        return ans;
    }
};
