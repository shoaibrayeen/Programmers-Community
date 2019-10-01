#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[1000],temp;
    int n,i;
    cout<<"Enter a String : ";
    gets(str);
    n = strlen(str)-1;
    int j=0;
    while(j<n){
        temp = str[j];
        str[j] = str[n];
        str[n] = temp;
        j++;
        n--;
    }
    puts(str);
    return 0;
}
