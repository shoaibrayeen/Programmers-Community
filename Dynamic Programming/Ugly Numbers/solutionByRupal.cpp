/*
  Program Description - This program return Nth Ugly number.
*/


# include<bits/stdc++.h> 
using namespace std; 
#define ll long long int  
  ll ugly[10005]; // To store ugly numbers 
/* Function to get the nth ugly number*/
ll getNthUglyNo(ll n) 
{ 
 
    ll i2 = 0, i3 = 0, i5 = 0; 
    ll next_multiple_of_2 = 2; 
    ll next_multiple_of_3 = 3; 
    ll next_multiple_of_5 = 5; 
    ll next_ugly_no = 1; 
 
    ugly[0] = 1; 
    for (ll i=1; i<n; i++) 
    { 
       next_ugly_no = min(next_multiple_of_2, 
                           min(next_multiple_of_3, 
                               next_multiple_of_5)); 
       ugly[i] = next_ugly_no; 
       if (next_ugly_no == next_multiple_of_2) 
       { 
           i2 = i2+1; 
           next_multiple_of_2 = ugly[i2]*2; 
       } 
       if (next_ugly_no == next_multiple_of_3) 
       { 
           i3 = i3+1; 
           next_multiple_of_3 = ugly[i3]*3; 
       } 
       if (next_ugly_no == next_multiple_of_5) 
       { 
           i5 = i5+1; 
           next_multiple_of_5 = ugly[i5]*5; 
       } 
    } /*End of for loop (i=1; i<n; i++) */
    return next_ugly_no; 
} 
 
/* Driver program to test above functions */
int main() 
{ 
   int t;
   cin>>t;
   getNthUglyNo(10002); 
   while(t--){
	   int n;
	   cin>>n;
		cout <<ugly[n-1]<<endl;
 
   }
   //cout<<ugly[9];
 
    return 0; 
}
