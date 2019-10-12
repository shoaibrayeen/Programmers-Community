
#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define tr(n,x) for(int i=x;x<n?i<n:i>=n;x<n?i++:i--)
#define ll long long int
#define pb push_back
#define em emplace_back
#define mk make_pair
#define isro ios_base::sync_with_stdio(false)
#define find(v,x) find(all(v),x)!=v.end()
#define debug(c) cout<<c<<endl;


using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;
typedef vector<string>si;
typedef vector<si>sii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

ll Max=1e6;
vi visited(Max,0);


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

int main(){
    isro;
    
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
    
    cout<<Detect_loop(start,start)<<endl;
    
    return 0;
}
