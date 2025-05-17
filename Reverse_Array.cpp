class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char>st;
        for(auto it:s){
            st.push(it);
        }
        int i=0;
        while(i<s.size()&& !st.empty()){
            s[i]=st.top();
            st.pop();
            i++;
        }
    }
};
