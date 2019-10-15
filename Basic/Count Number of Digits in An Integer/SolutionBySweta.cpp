#include <bits/stdc++.h>
using namespace std;

int countDigit(long long n)
{
if (n == 0)
return 0;
return 1 + countDigit(n / 10);
}


int main(void)
{
long long n ;
cin>>n;
cout << countDigit(n);
return 0;
}

