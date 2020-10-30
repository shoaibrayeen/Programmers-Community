#include<iostream>
using namespace std;
int fact(int n){
    int prod;
    if(n==0){
        return 1;
    }
    prod=n*fact(n-1);
    return prod;
                          

}

int main(int argc,char** argv){
  int a =fact(5);
  cout<< a;
}
