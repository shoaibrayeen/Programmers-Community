#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int maxProfit(int idx, int prev_idx, vector<vector<int>> &jobs, vector<vector<int>> &dp)
{
	if(idx >= jobs.size())
		return 0;
	else if(dp[idx][prev_idx] != -1)
		return dp[idx][prev_idx];
	else
	{
		if(jobs[prev_idx][1] <= jobs[idx][0])
			dp[idx][prev_idx] = max(jobs[idx][2]+maxProfit(idx+1, idx, jobs, dp), maxProfit(idx+1, prev_idx, jobs, dp));
		else
			dp[idx][prev_idx] = maxProfit(idx+1, prev_idx, jobs, dp);
		return dp[idx][prev_idx];
	}
}

int main()
{
	int t=1;
	//cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<vector<int>> jobs(n+1, vector<int>(3));

		jobs[0][0] = 0;
		jobs[0][1] = 0;
		jobs[0][2] = 0;

		vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
		for(int i=1;i<=n;i++)
		{
			int st, en, profit;
			cin>>st>>en>>profit;
			jobs[i][0] = st;
			jobs[i][1] = en;
			jobs[i][2] = profit;
		}
		sort(jobs.begin(), jobs.end()); // sort on the basis of start time
		cout<<maxProfit(1, 0, jobs, dp)<<endl;
	}
	return 0;
}
