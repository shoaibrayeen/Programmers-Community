#include <iostream>
#include <string>
#include <stack> 
using namespace std;

/* 
	Time complexity: O(N) 
    Space complexity: O(N) 
    where N is the length of the given expression 
*/ 

bool isBalanced(string expression) { 
    stack<char> stk; 
    for (int i = 0; i < expression.length(); i++) { 
        if (expression[i] == '(') { 
            stk.push(expression[i]); 
        } else if (expression[i] == ')') { 
            if (stk.empty()) { 
                return false; 
            } 
            char topChar = stk.top(); 
            stk.pop(); 
            if (expression[i] == ')' && topChar == '(') { 
                continue; 
            } else { 
                return false; 
            } 
        } 
    } 
    return stk.empty(); // 'true' or 'false'
}

int main() 
{
    string input;
    cin >> input; // The first and the only line of input contains a string expression without any spaces in between.
    cout << ((isBalanced(input)) ? "true" : "false");
    /*
        Expression: (()())
        Since all the opening brackets have their corresponding closing brackets, we say it is balanced and hence the output will be, 'true'.
    */
}
