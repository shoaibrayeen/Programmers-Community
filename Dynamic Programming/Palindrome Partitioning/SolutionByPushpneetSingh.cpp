    #include<bits/stdc++.h>
    using namespace std;
    int dp[2001][2001];
    
    bool ispallindrome(string s,int i, int j){
        if(s.size()==1) return true;
        if(i==j) return true;
        
        while(i<j){
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    
    int solve(string s,int i,int j){
        if(i>=j) return 0;
        if(ispallindrome(s,i,j)) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        
        int ans=INT_MAX,op1,op2;
        
        for(int k=i;k<j;k++){
            if(dp[i][k] != -1) op1=dp[i][k];
            else {
                op1 = solve(s,i,k);
                dp[i][k] = op1;
            }
            
            if(dp[k+1][j] != -1) op2=dp[k+1][j];
            else {
                op2 = solve(s,k+1,j);
                dp[k+1][j]=op2;
            }
            int temp=op1+op2+1;
            if(temp<ans) ans=temp;
        }
        cout<<ans<<endl;
        return dp[i][j] = ans;
    }
    
    int main() {
        string s;
        cin>>s;
        memset(dp,-1,sizeof(dp));
        cout<<solve(s,0,s.size()-1);
        return 0;
    }
