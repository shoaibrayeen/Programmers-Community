#include <bits/stdc++.h>
using namespace std;

 void findNumbers(vector<int>& ar, int sum, vector<vector<int> >& res, vector<int>& r, int i) {
 	if (sum == 0) {
 		res.push_back(r);
 		return;
 	}
 	while (i < ar.size() && sum - ar[i] >= 0) {

 		r.push_back(ar[i]);
 		findNumbers(ar, sum - ar[i], res, r, i);
 		i++;
 		r.pop_back();
 	}
 }

 vector<vector<int> > combinationSum(vector<int>& ar, int sum) {
 	sort(ar.begin(), ar.end());
 	ar.erase(unique(ar.begin(), ar.end()), ar.end());

 	vector<int> r;
 	vector<vector<int> > res;
 	findNumbers(ar, sum, res, r, 0);

 	return res;
 }

 int main() {
 	
 	int n, sum;
 	cout << "Enter the size of array: ";
 	cin >> n;
 	
 	vector<int> ar(n, 0);
 	
 	cout << "Enter the elements of the array: ";
    	for (auto& i : ar) {
        cin >> i;
    	}

 	cout << "Enter the required sum: ";
 	cin >> sum;
 	
 	vector<vector<int> > res = combinationSum(ar, sum);

 	if (res.size() == 0) {
 		cout << "Empty";
 		return 0;
 	}
 	for (int i = 0; i < res.size(); i++) {
 		if (res[i].size() > 0) {
 			cout << "[";
 			for (int j = 0; j < res[i].size(); j++){
 				cout << res[i][j];
 				if (j<(res[i].size()-1))
 				    cout << ", ";
 			}
 			cout << "]\n";
 		}
 	}
 }
