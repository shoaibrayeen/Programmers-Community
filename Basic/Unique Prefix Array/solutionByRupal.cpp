#include<iostream>
#include<unordered_map>
using namespace std;
 
class node{
public:
    char data;
    unordered_map<char,node*> children;
    bool terminal;
    int freq=1;        // how many times this article is used
 
    node(char data){
        this->data = data;
        this->terminal=false;
    }
};
class trie{
public:
    node* root;
    int cnt;
 
    trie(){
        root=new node('\0');
        cnt=0;
    }
    void insert(char* word){
        node* temp=root;
        for( int i=0;word[i]!='\0';i++){
            char c=word[i];
            if(temp->children.count(c)){
                temp=temp->children[c];
                temp->freq+=1;    // increasing frequency 
            }
            else{
                node* n=new node(c);
                temp->children[c]=n;        // making a new entry in hash map
                temp=n;     // Or  temp=temp->children[c];  both are same
            }
        }
        temp->terminal=true;
    }
 
    void prefix_print(char* word){
        node* temp=root;
        for(int i=0;word[i]!='\0';i++){
            char ch=word[i];
            temp=temp->children[ch];
            if(temp->freq==1){
                cout<<ch<<",";
                break;
            }
            else{
                cout<<ch;
            }
        }
        return;
    }
 
};
 
 
int main(){
    trie t;
    char words[][10]={ "a","helio","zebra", "dog", "duck", "dove"};
    char w[10];
    cin>>w;
    for( int i=0;i<(sizeof(words)/sizeof(char))/10;i++){
        t.insert(words[i]);
    }
    for( int i=0;i<(sizeof(words)/sizeof(char))/10;i++){
        t.prefix_print(words[i]);
    }
 
}
