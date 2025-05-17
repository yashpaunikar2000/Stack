class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        for (auto it : s) {
            if (st1.empty()) {
                if (it == '#') {
                    continue;
                } else {
                    st1.push(it);
                }
            } else if (it == '#') {
                st1.pop();
            } else {
                st1.push(it);
            }
        }
        for (auto it : t) {
            if (st2.empty()) {
                if (it == '#') {
                    continue;
                } else {
                    st2.push(it);
                }
            } else if (it == '#') {
                st2.pop();
            } else {
                st2.push(it);
            }
        }
        return st1 == st2;
    }
};
