/*
  Program Description - This program return maximum number of activity.
*/

/*
You are given n activities (from 0 to n-1) 
with their start and finish times. Select
the maximum number of activities that can be 
performed by a single person, assuming that 
a person can only work on a single activity at a time.
Input Format
The first line consists of an integer T,
the number of test cases. For each test case,
the first line consists of an integer N, the number of activities.
Then the next N lines contain two integers m and n, 
the start and end time of each activity.
Constraints
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int,int> q,pair<int,int> w){
    return q.second<w.second;
}
int main(){
    int T;
   cin>>T;
   for(int j=0;j<T;j++){
       int no_of_activity;
       cin>>no_of_activity;
      // int a[no_of_activity],b[no_of_activity];
      pair<int,int> p[no_of_activity];
       for(int i=0;i<no_of_activity;i++){
           cin>>p[i].first>>p[i].second;
       }
       sort(p,p+no_of_activity,compare);
       int key_time=p[0].second;
       int count=1;
       for(int i=1;i<no_of_activity;i++){
            if(p[i].first>=key_time){
                key_time=p[i].second;
                count++;
            }
       }
        cout<<count<<endl;
    }
}
