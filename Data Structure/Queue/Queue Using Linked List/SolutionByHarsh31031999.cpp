/*
  Program Description - Queue using Linkwd list.
 
*/


#include <iostream>
#include<list>
using namespace std;
 
class queue{
private:
    int cs;
    list<int> qu;
 
public: 
    queue(){
        this->cs=0;        
    }
 
    bool isEmpty(){
         return this->cs==0;
    }
 
    void enqueue(int data){
        this->qu.push_back(data);
        this->cs+=1;
    }
    void dequeue(){
        if(!isEmpty()){
            this->cs-=1;
            this->qu.pop_front();  
        }
    }
    int getFront(){
        return this->qu.front();
    }
};
 
int main() {
    queue q;
    for  ( int i=1;i<6;i++){
        q.enqueue(i*i);
    }
    q.dequeue();
    q.enqueue(8);
    while(!q.isEmpty()){
        cout<<q.getFront()<<" ";
        q.dequeue();
    }
}
