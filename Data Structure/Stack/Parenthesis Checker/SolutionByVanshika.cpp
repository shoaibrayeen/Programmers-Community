#include <bits/stdc++.h>
using namespace std;

bool isValid(string s1) {
         stack <char> s;
           char x;
    int n=s1.size();
    for(int i=0;i<n;i++){
        if (s1[i]=='('|| s1[i]=='[' || s1[i]=='{'){
              s.push(s1[i]);
              continue;
        }
        if(s.empty())
        return false;
        switch(s1[i]){
            case ')':{
                  x=s.top();
                  s.pop();
                  if(x=='{' || x=='[')
                    return false;
                    break;
            }
            case '}':{
                  x=s.top();
                  s.pop();
                  if(x=='(' || x=='[')
                    return false;
                    break;
            }
            case ']':{
                  x=s.top();
                  s.pop();
                  if(x=='{' || x=='(')
                    return false;
                    break;
            }

            }
        }
        return(s.empty());
  
        
    }
int main(){
       string s1;
      cin >> s1;
         if(isValid(s1))
                  cout << "Balanced" << endl;
         else cout << "Not Balanced" << endl;
}
         
         
         
