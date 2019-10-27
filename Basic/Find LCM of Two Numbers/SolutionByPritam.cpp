// CPP program to illustrate
// lcm generation using stl
#include <iostream> 
#include <algorithm>  
  
using namespace std; 
  
int main() 
{ 
    int m,n;
    cin>>m>>n;
    
    int prd;
    prd = (m*n);
    int lcm;
    lcm = prod/(__gcd(m,n));
    cout << "lcm of"<<m<<"&"<<n<<"is"<< lcm << endl; 
} 
