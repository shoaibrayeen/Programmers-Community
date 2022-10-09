// square root using binary search
 
#include<iostream>
using namespace std;
 
float roots(int n){
    int start,end,mid;
    start=0;
    end=n;
    float ans=-1;
    while(start<=end){
        mid=(start+end)/2;
        cout<<mid<<endl;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid<n){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }   
    // floating part
    // brute force
    float increament=0.1;
    for(int q=0;q<3;q++){
        while(ans*ans<=n){
            ans=ans+increament;
        }
        //ans value overshoots the value foe one round 
        // overshoot the value
        ans=ans - increament;
        increament=increament/10;
    }
return ans;
}
int main(){
    int n;
    cin>>n;
    float final_ans=roots(n);
    cout<<"square root is : "<<final_ans;
    //float square_root;
    //square_root= roots(n);
    //cout<<square_root;         
    return 0;
}
