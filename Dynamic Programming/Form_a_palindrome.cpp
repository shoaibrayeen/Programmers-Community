int dp[1002][1002];
   int solve(int x, int y, string s1, string s2){
       for(int i=1;i<x+1;i++){
           for(int j=1;j<y+1;j++){
               if(s1[i-1]==s2[j-1]){
                   dp[i][j]=1+dp[i-1][j-1];
               }else{
                   dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
               }
           }
       }
       return dp[x][y];
   }    
       
   int lcs(int x, int y, string s1, string s2)
   {
           for(int i=0;i<y+1;i++){
               dp[0][i]=0;
           }
           for(int i=0;i<x+1;i++){
               dp[i][0]=0;
           }
           return solve(x,y,s1,s2);
   }
   int countMin(string str){
   //complete the function here
   string s=str;
   reverse(str.begin(),str.end());
   return str.length()-lcs(str.length(),str.length(),s,str);
   }
