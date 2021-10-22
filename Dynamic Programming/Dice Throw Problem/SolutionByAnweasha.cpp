#include<iostream>
#include<vector>
using namespace std;
 
int diceThrow(int n, int sum, int faces)
{
    vector<vector<int> > dp(n+1,vector<int>(sum+1,0));
 
    //dp[i][j]=number of ways to get sum j with i number of available dices
 
    int i,j,k;

    dp[0][0]=1;
 
    //i number of dices available
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sum;j++)
        {
            if(j<i)
                dp[i][j]=0;
 
            else if(j>faces*i)
                dp[i][j]=0;
 
            else
            {
                for(k=1;k<=faces && j>=k;k++)
                    dp[i][j]+=dp[i-1][j-k];
            }
 
        }
    }
 
    return dp[n][sum];
}
 
int main()
{
    int n, sum, faces;
 
    cout << "Enter number of dices: ";
    cin >> n;
 
    cout << "Enter the value of sum: ";
    cin >> sum;
    
    cout << "Enter number of faces in a dice: ";
    cin >> faces;
 
    cout << "Number of ways in which the dices can give the required sum is: ";
    cout << diceThrow(n, sum, faces);
 
    cout << endl;
    return 0;
}
