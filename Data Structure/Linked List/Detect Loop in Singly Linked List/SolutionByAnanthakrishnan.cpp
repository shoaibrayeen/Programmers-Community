#include<bits/stdc++.h>      // Header Files
#define ll long long int


using namespace std;


struct List{
    ll item;
    List *next;
}*root=NULL;

List *Create_List(ll item){
    List *node=new List();
    node->item=item;
    node->next=NULL;
    return node;
}

bool Detect_loop(List *node1, List *node2){

    while(node2!=NULL){
        node1=node1->next;
        if (node2->next!=NULL)
            node2=node2->next->next;
        else 
            node2=NULL;

        if(node1==node2)
             return true;
    }
    
    return false;
}

int main(){                                     // Driver Code 
    
    List *start=NULL;
    root=Create_List(1);
    start=root;

    root->next=Create_List(2);
    root=root->next;

    root->next=Create_List(3);
    root=root->next;

    root->next=Create_List(4);
    root=root->next;
    List *node_4=root;

    root->next=Create_List(5);
    root=root->next;

    root->next=Create_List(6);
    root=root->next;

    root->next=Create_List(7);
    root=root->next;

//Create Loop in list
    root->next=node_4;
    
    if(Detect_loop(start,start)){
        cout<<"Found loop"<<endl;
    }
    else{
       cout<<"Not Found"<<endl;
    }
    
    return 0;
}
