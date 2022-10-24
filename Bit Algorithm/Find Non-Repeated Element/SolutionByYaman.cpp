#include <iostream>
using namespace std;

int main(){
    int size,a,ans=0;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>a;
        ans ^= a;
    }
    cout<<ans<<endl;
    
    return 0;
}