
/* Hint : We can use bitwise operators to check if the number is odd or even. 
We need to check whether last bit is 1 or not. If last bit is 1 then number is odd, otherwise the number is even */

#include <iostream> 
using namespace std; 
  
// Returns true if n is 
// even, else odd 
bool isEven(int n) 
{      
// n & 1 is 1, then  
// odd, else even 
return (!(n & 1)); 
} 
  
int main() 
{  
    int N;
    cout<<"Enter the number"<<endl;
    cin>>N;
    isEven(N)? cout << "EVEN" : 
                cout << "ODD"; 
  
    return 0; 
} 
