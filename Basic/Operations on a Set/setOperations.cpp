#include <iostream>
using namespace std;
#define n 100
class intset{
  int set[n];
  public:
  intset(){
    for(int i=0;i<n;i++)
     set[i]=0;
  }
  void insert(int k){
    set[k]=1;
  }
  void del(int m){
    set[m]=0;
  }
  void disp(){
    for(int i=0;i<n;i++){
      if(set[i]==1)
       cout<<i<<" ";
    }
  }
  void i(intset &o1){
    for(int i=0;i<n;i++){
      if(set[i]==1&&o1.set[i]==1)
       cout<<i<<" ";
    }
  }
  void u(intset &o1){
    for(int i=0;i<n;i++){
      if(set[i]==1||o1.set[i]==1)
       cout<<i<<" ";
    }
  }
  bool equal(intset &o1){
    for(int i=0;i<n;i++){
      if(set[i]!=o1.set[i])
      return false;
    }
    return true;
  }
};
int main() {
  intset o1;
  intset o2;
  o1.insert(2);  
  o1.insert(3);
  o1.insert(9);
  o1.del(3);
  o2.insert(2);
  o2.insert(3);
  o2.insert(9);
  o2.del(9);
  o2.insert(1);
  o1.disp();
  cout<<endl;
  o2.disp();
  cout<<endl;
  o1.u(o2);
  cout<<endl;
  o2.i(o1);
  if(o1.equal(o2))
   cout<<"\nEqual ";
  else
  cout<<"\nUnequal";
}