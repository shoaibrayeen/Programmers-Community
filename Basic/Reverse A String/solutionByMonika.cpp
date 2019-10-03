#include <iostream>
using namespace std;
int main()
{
    char str[1000],temp;
    cin>>str;
    int n ;
    int length = 0;
    while(str[length]!=0){
        length++;
    }
    n = length -1;
    int k=0;
    while(k<n){
        temp = str[k];
        str[k] = str[n];
        str[n] = temp;
        k++;
        n--;
    }
    cout<<str;
    return 0;
}
