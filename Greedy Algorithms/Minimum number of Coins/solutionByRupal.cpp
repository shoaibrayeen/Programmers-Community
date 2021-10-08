/*
  Program Description - This program return minimum no of coins from a given value in indian currency.
  
*/

#include<iostream>
#include<algorithm>
using namespace std;
 
int make_change(int *arr,int size,int amount){
    int ans=0;
    while(amount>0){
        int idx=upper_bound(arr,arr+size,amount) - arr -1;
        cout<<arr[idx]<<" ";
        amount=amount-arr[idx];
        ans++;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int coins[]={1,2,5,10,20,50,100,200,500,2000};
    int size=sizeof(coins)/sizeof(int);
 
    int no_of_coins=make_change(coins,size,n);
 
    cout<<"\ntotal no of coins : "<<no_of_coins;
    return 0;
}
