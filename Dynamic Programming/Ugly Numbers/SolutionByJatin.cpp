// ugly no solution
// using Dp
// Jatin Goyal
// problem

//Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, 25 … shows some ugly numbers. 
//By convention, 1 is included.

#include<bits/stdc++.h>
using namespace std;

 int nthUglyNumber(int n) {
        
        vector<int> dp(n);
        dp[0]=1;
        int multi2= dp[0]*2;
        int multi3 = dp[0]*3;
        int multi5 = dp[0]*5;
        int i2=0,i3=0,i5=0;
        for(int i =1 ; i <n; i++ ){
            dp[i]= min(multi2, min(multi3,multi5));
            if(dp[i] == multi2){
                i2+=1;
                multi2=dp[i2]*2;
                
            }
            if(dp[i] == multi3){
                i3+=1;
                multi3=dp[i3]*3;
                
            }
            if(dp[i] == multi5){
                i5+=1;
                multi5= dp[i5]*5;
                
            }
        }
        return dp[n-1];
        
    }
int main(int argc ,char **argv){
    int n;
    cin>> n;
    cout<<nthUglyNumber(n);
    
    return 0;
}
