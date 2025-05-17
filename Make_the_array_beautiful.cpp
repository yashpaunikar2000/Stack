
class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        stack<int>st;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            if(st.empty()){
                st.push(arr[i]);
            }else if(arr[i]>=0){
                if(st.top()>=0)
                    st.push(arr[i]);
                    else
                    st.pop();
                }
            else{
                if(arr[i]<0){
                    if(st.top()<0)
                        st.push(arr[i]);
                        else
                        st.pop();
                }
            }
        }
        int i=0;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
            i++;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
