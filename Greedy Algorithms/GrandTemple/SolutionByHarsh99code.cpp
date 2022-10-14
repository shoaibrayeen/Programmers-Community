/*
A religious king wants to build 
the largest temple in his kingdom . 
To build the largest temple he needs to find
the area of the largest suitable land .
Given co-ordinates which denotes rivers 
flowing through the point horizontally as
well as vertically , find the largest area 
possible to make the grand temple.
 
Consider 2 rivers flowing across x-axis as
well as y-axis. The temple must be enclosed
by rivers on all 4 sides. 
*/
 
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int> x,y;
    x.reserve(n);
    y.reserve(n);
    for(int i=0;i<n;i++){
        int temp1,temp2;
        cin>>temp1>>temp2;
        x.push_back(temp1);
        y.push_back(temp2);
    }
 
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
 
    int dx=0,dy=0;
    int prev_x=x[0];
    int prev_y=y[0];
 
    for(int i=1;i<n;i++){
 
        dx=max(dx,(x[i]-prev_x -1));
        dy=max(dy,(y[i]-prev_y -1));
        prev_x=x[i];
        prev_y=y[i];
    }
 
    //cout<<dx<<" "<<dy;
    cout<<dx*dy;
    return 0;
}
