#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private :
    queue<int>q1;
    queue<int>q2;
public:
    void push(int x){
        q1.push(x);
    }
    int pop(){
        if(q1.empty() && q2.empty())
            return -1;

        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        int x=q1.front();
        q1.pop();
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return x;
    }
};
int main(){
    QueueStack *qs = new QueueStack();
    qs->push(10);
    qs->push(5);
    qs->push(-6);
    cout<<qs->pop()<<endl; // prints -6
    cout<<qs->pop()<<endl; // prints 5
    qs->push(8);
    qs->push(0);
    cout<<qs->pop()<<endl; // prints 0
}
