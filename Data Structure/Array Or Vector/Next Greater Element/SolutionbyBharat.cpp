#include<bits/stdc++.h>
#define ll long long int

using namespace std;
typedef vector<ll>vi;


void Solve(vi &array, vi & greater_element, ll array_size){

    ll i=array_size-2;

    while(i>=0){
        if(array[i]<array[i+1])
            greater_element[i]=array[i+1];
        
        ll j=i;
        while(j<array_size){
            if(array[i]<greater_element[j]){
                greater_element[i]=greater_element[j];
                break;   
            }
            j++;
        }

        i--;    
    }

}

int main(){
    ll n;
    cin>>n;

    vi array(n),greater_element(n,-1);

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    Solve(array,greater_element,n);  

    cout<<"Element"<<" "<<"NGE"<<endl;

    for(ll i=0;i<n;i++)
        cout<<array[i]<<" ----> "<<greater_element[i]<<endl;

   return 0;
}
