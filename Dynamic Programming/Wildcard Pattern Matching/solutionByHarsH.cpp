/*
  Program Description - This program matches wildcard matching with COMPRESSION feature.
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
 
bool wild_match(char txt[],char patt_temp[]){
 
 
    //compression of pattern
    char patt[1000000];
    int j=1;
    patt[0]=patt_temp[0];
     //cout<<patt[0]<<":"<<patt_temp[0]<<endl;
    for(int i=1;patt_temp[i]!='\0';i++){
 
        //cout<<patt[j]<<":"<<patt_temp[i];
      // cout<<patt_temp[i-1]<<":"<<patt_temp[i];
        if(patt_temp[i-1]=='*' && patt_temp[i]=='*'){
            cout<<" inside \n";
            //j++;
           // continue;
        }else{
 
           // cout<<" "<<j<<" outside \n";
            patt[j]=patt_temp[i];
            ++j;
        }
    }
   // cout<<"final patteren is : "<<patt<<endl;
 
    ll t_len = strlen(txt);
    ll p_len = strlen(patt);
     // lookup table for storing results of 
    // subproblems 
    bool dp[t_len+1][p_len+1];
    memset(dp,false,sizeof(dp));
    // empty pattern can match with empty string 
    dp[0][0]=true;
    // Only '*' can match with empty string 
    for(ll j=1;j<=p_len;j++){
        if(patt[j-1]=='*'){
            dp[0][j]=dp[0][j-1];//pattern 0th position but dp 1st position
        }
    }
      // fill the table in bottom-up fashion 
    for( ll i=1; i <= t_len ;i++){
        for(ll j=1; j<= p_len ; j++){
            // Two cases if we see a '*' 
            // a) We ignore â*â character and move 
            //    to next  character in the pattern, 
            //     i.e., â*â indicates an empty sequence. 
            // b) '*' character matches with ith 
            //     character in input 
 
            if(patt[j-1]=='*'){
                dp[i][j] = dp[i][j-1]  || dp[i-1][j];
            }
            //Current characters are considered as 
            // matching in two cases 
            // (a) current character of pattern is '?' 
            // (b) characters actually match 
 
            else if(patt[j-1]=='?' ||(txt[i-1]==patt[j-1])){
                dp[i][j] = dp[i-1][j-1];
            }
            // If characters don't match 
            else{
                dp[i][j]=false;
            }
        }
    }
   // for( ll i=0; i <= t_len ;i++){for(ll j=0; j<= p_len ; j++)cout<<dp[i][j]<<" ";}cout<<endl<<endl;}
    return dp[t_len][p_len];
}
 
int main(){
    char txt[1000000],patt_temp[1000000];     //text and pattern 
    cin>>txt>>patt_temp;
 
    if(wild_match(txt,patt_temp)){
        cout<<"1";
    }else{
        cout<<"0";
    }
    
}
