
#include <bits/stdc++.h>
#include<string>
#include<stack>
using namespace std;


    string removeSpaces(string s)
    {
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        return s;
    }

    bool isOperator(char c)
    {
       return (!isalpha(c) && !isdigit(c));
    }

    int getPriority(char C)
    {
      if (C == '-' || C == '+')
        return 1;
      else if (C == '*' || C == '/')
        return 2;
      else if (C == '^')
        return 3;
      return 0;
    }

    string infixToPostfix(string infix)
    {
      infix = '(' + infix + ')';
      int l = infix.size();
      stack<char> char_stack;
      string output;

      for (int i = 0; i < l; i++) {
        if (isalpha(infix[i]) || isdigit(infix[i]))
          output += infix[i];
        else if (infix[i] == '(')
          char_stack.push('(');
        else if (infix[i] == ')') {
          while (char_stack.top() != '(') {
            output += char_stack.top();
            char_stack.pop();
          }
          char_stack.pop();
        }
        else {

          if (isOperator(char_stack.top())) {
            while (getPriority(infix[i])
            <= getPriority(char_stack.top())) {
              output += char_stack.top();
              char_stack.pop();
            }
            char_stack.push(infix[i]);
          }
        }
      }
      return output;
    }

    string infixToPrefix(string infix)
    {
      int l = infix.size();
      reverse(infix.begin(), infix.end());
      for (int i = 0; i < l; i++) {
        if (infix[i] == '(') {
          infix[i] = ')';
          i++;
        }
        else if (infix[i] == ')') {
          infix[i] = '(';
          i++;
        }
      }

      string prefix = infixToPostfix(infix);
      reverse(prefix.begin(), prefix.end());
      return prefix;
    }


int postfixEval(string exp) {
   stack <int> x;
   for (int i = 0; exp[i]; ++i)
    {
        if (isdigit(exp[i]))
            x.push(exp[i] - '0');

        else
        {
            int val1 = x.top();
            x.pop();
            int val2 = x.top();
            x.pop();
            switch (exp[i])
            {
            case '+': x.push( val2 + val1); break;
            case '-': x.push( val2 - val1); break;
            case '*': x.push(val2 * val1); break;
            case '/': x.push( val2/val1); break;
            }
        }
    }
    return x.top();
}



    int main(int argc, char *argv[])
    {
      int value;
      string s;
      for (int i=1;i<argc;i++){
        s.append(argv[i]).append(" ");
      }
      if(argc=1){
        cout<<"No Arguments Passed\nEnter expression here\n";
        getline(cin,s);
      }
      if(s.size()>=1){
      s=removeSpaces(s);
      cout<<"Postfix : "<<infixToPostfix(s)<<endl;
      cout<<"Prefix : "<<infixToPrefix(s)<<endl;
      s=infixToPostfix(s);
      value=postfixEval(s);
      cout<<"Value : "<<value<<endl;
      }
      else
      cout<<"Value : 0"<<endl;
      return 0;
    }
