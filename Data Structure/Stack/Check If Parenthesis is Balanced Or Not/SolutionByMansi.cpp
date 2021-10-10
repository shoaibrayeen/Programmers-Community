#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    if (s[0] == ')' or s[0] == '}' or s[0] == ']')
        return false;
    stack<char> st;
    st.push(s[0]);
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == '(' or s[i] == '{' or s[i] == '[') {
            st.push(s[i]);
        } else if (!st.empty()) {
            if (s[i] == ')' and st.top() == '(') {
                st.pop();
            } else if (s[i] == ']' and st.top() == '[') {
                st.pop();
            } else if (s[i] == '}' and st.top() == '{') {
                st.pop();
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
    return st.empty();
}

int main()
{
    string s;
    cin >> s;

    if (isValid(s))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}
