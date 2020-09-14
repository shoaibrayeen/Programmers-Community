// KMP pattern searching algorithm 

#include <bits/stdc++.h> 
using namespace std;

// compute LPS array for pat 
void computeLPSArray(string pat, int M, int* lps) 
{
    int i = 1, len = 0;
    lps[0] = 0;
    while(i<M)
    {
        if(pat[i]==pat[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len==0)
            {
                lps[i]=0;
                i++;
            }
            else
                len = lps[len-1];
        }
    }
    
} 

// check if pat exists in txt
bool KMPSearch(string pat, string txt) 
{
    int n = txt.length(), m = pat.length();
    int lps[m];
    computeLPSArray(pat, m, lps);
    int i=0, j=0;
    while(i<n)
    {
        if(pat[j]==txt[i])
        {
            i++;
            j++;
        }
        if(j==m)
            return true;
        else if( pat[j] != txt[i])
        {
            if(j==0)
                i++;
            else
                j = lps[j-1];
        }
    }
    return false;
}

// main function 
int main() 
{
    string str, pat;
    cout<<" Enter String: ";
    cin>>str;
    cout<<" Enter Pattern: ";
    cin>>pat;
    if(KMPSearch(pat, str))
      cout<<" True"<<endl;
    else
      cout<<" False"<<endl;
    return 0;
}
