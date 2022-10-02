#include <bits/stdc++.h>
using namespace std;
int setbit_Count(int NUM){
    int count=0;
    while(NUM>0){
        count+=(NUM&1);
        NUM=NUM>>1;
    }
    return count;
}
int main(){
    int NUM;
    cin>>NUM;
    // Function call
    cout << setbit_Count(NUM) << endl;

}
