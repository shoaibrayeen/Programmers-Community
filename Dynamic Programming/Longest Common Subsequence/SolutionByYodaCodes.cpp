#include <iostream>

using namespace std;

int longestCommonSubsequence(string text1, string text2) {
    int n = text1.size(), m = text2.size();
    
    int dp[n+1][m+1]; // dp matrix
    for(int i = 0; i <= n; i++){  // bottom-up approach for filling dp matrix
        for(int j = 0; j <= m; j++){
            if(i == 0 || j == 0){   // trivial case
                dp[i][j] = 0;
            }else if(text1[i-1] == text2[j-1]){ // common character found
                dp[i][j] = dp[i-1][j-1] + 1;
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]); 
            }
        }
    }
    
    return dp[n][m];
}

int main(){
    string s1, s2;
    cout << "Enter string 1: ";
    cin >> s1;
    cout << "Enter string 2: ";
    cin >> s2;

    cout << "The length of the longest common subsequence is " << longestCommonSubsequence(s1, s2) << "\n";

    return 0;
}
