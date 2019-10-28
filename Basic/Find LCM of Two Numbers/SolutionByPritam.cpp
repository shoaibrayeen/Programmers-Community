#include<bits/stdc++.h>
#include <iostream> 
#include <algorithm>  

 using namespace std; 

 int main() 
{   
    
    
     
    long long int m,n;
   cout<<"Enter the numbers"<<endl;
    cin>>m>>n;

    long long int prd;
    prd = (m*n);
    long long int lcm;
    lcm = prd/(__gcd(m,n));
    cout << "LCM of"<<" "<<m<<"and"<<n<<"is"<< lcm << endl;
   
 
     


}
