#include "bits/stdc++.h"
using namespace std;
#define int long long
const int N = 1e5 + 2, MOD = 1e9 + 7;

int tree[4 * N], a[N];

void build(int node, int st, int en)
{
	if (st == en)
	{
		tree[node] = a[st];
		return;
	}

	int mid = (st + en) / 2;
	build(2 * node, st, mid);
	build(2 * node + 1, mid + 1, en);

	tree[node] = max(tree[2 * node], tree[2 * node + 1]);
}

int query(int node, int st, int en, int l, int r)
{
	if (st > r || en < l)
		return -MOD;

	if (l <= st && en <= r)
		return tree[node];

	int mid = (st + en) / 2;
	int q1 = query(2 * node, st, mid, l, r);
	int q2 = query(2 * node + 1, mid + 1, en, l, r);

	return max(q1, q2);
}

void update(int node, int st, int en, int idx, int val)
{
	if (st == en)
	{
		a[st] = val;
		tree[node] = val;
		return;
	}

	int mid = (st + en) / 2;
	if (idx <= mid)
	{
		update(2 * node, st, mid, idx, val);
	}
	else
	{
		update(2 * node + 1, mid + 1, en, idx, val);
	}

	tree[node] = max(tree[2 * node], tree[2 * node + 1]);
}

signed main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	build(1, 0, n - 1);
	while (m--)
	{
		int type;
		cin >> type;
		if (type == 1)
		{
			int idx, val;
			cin >> idx >> val;
			update(1, 0, n - 1, idx, val);
		}
		else if (type == 2)
		{
			int x;
			cin >> x;
			int lo = 0, hi = n - 1;
			int ans = n;
			while (lo <= hi)
			{
				int mid = (lo + hi) / 2;
				if (query(1, 0, n - 1, lo, mid) < x)
				{
					lo = mid + 1;
				}
				else
				{
					hi = mid - 1;
					ans = min(ans, mid);
				}
			}

			if (ans == n)
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << ans << endl;
			}
		}
	}
	return 0;
}
