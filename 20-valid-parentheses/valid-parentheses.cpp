class Solution {
public:
    int match(char a, char b) {
        if (a == '(' && b == ')')
            return 1;
        if (a == '{' && b == '}')
            return 1;
        if (a == '[' && b == ']')
            return 1;
        return 0;
    }

    bool isValid(string s) {
        stack<char> st;

        if (s.size() % 2 != 0) {
            return false;
        }

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty()) {
                    return false;
                }

                char first = st.top();
                st.pop();

                if (!match(first, ch)) {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
