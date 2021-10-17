#include <bits/stdc++.h>
using namespace std;


bool isBalanced(string exp)
{
    stack<char> st;
    for (int i = 0; i < exp.length(); i++) {
        if (exp[i] == '(') {
            st.push(exp[i]);
        } else if (exp[i] == ')') {
            if (st.empty()) {
                return false;
            }
            char topChar = st.top();
            st.pop();
            if (exp[i] == ')' && topChar == '(') {
                continue;
            } else {
                return false;
            }
        }
    }
    return st.empty(); 
}

int main()
{
    string exp;
    cin >> exp; 
    cout << ((isBalanced(exp)) ? "Parenthesis are balanced " : "Paranthesis are not balanced");
    return 0;
}
  
