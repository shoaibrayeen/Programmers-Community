/*
 
A group of cows grabbed a truck and ventured on an
expedition deep into the jungle. Being rather poor
drivers, the cows unfortunately managed to run
over a rock and puncture the truck's fuel tank. 
The truck now leaks one unit of fuel every unit of distance it travels.
 
To repair the truck, the cows need to drive to 
the nearest town (no more than 1,000,000 units distant) 
down a long, winding road. On this road,
between the town and the current location of the truck,
there are N (1 <= N <= 10,000) fuel stops where
the cows can stop to acquire additional fuel (1..100 units at each stop).
 
The jungle is a dangerous place for humans and is
especially dangerous for cows. Therefore, 
the cows want to make the minimum possible number 
of stops for fuel on the way to the town. Fortunately,
the capacity of the fuel tank on their truck 
is so large that there is effectively no limit to 
the amount of fuel it can hold. The truck is 
currently L units away from the town and 
has P units of fuel (1 <= P <= 1,000,000).
 
Determine the minimum number of stops needed to
reach the town, or if the cows cannot reach the town at all.
 
Input Format
 
The First Line contains a N integer followed by N 
number of pairs in the next lines.
Each line contains two space-separated integers 
describing a fuel stop: The first integer is 
the distance from the town to the stop; the 
second is the amount of fuel available at that stop.
The Last line contains a pair of L and P.
 
*/
 
#include<bits/stdc++.h>
using namespace std;
 
bool compare(pair<int,int> p1, pair<int,int> p2){
    return p1.first > p2.first;     //descending order
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,d,f,D,F;
        int prev=0;
        int flag=0,ans=0;
        vector<pair<int,int> > v;
        priority_queue<int> pq;
 
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>d>>f;
            v.push_back(make_pair(d,f));
        }
 
        //logic
        sort(v.begin(),v.end(),compare);
 
        cin>>D>>F;
 
        //update the distance of fuel station from truck
        for(int i=0;i<n;i++){
            v[i].first= D-v[i].first;
        }
 
        //prev denotes the previous city we have visited
        prev=0;
        x=0;
 
        while(x<n){
            //if we have enough fuelto go to next city
            if(F >=( v[x].first - prev )){
                F=F - (v[x].first - prev);
                pq.push(v[x].second);
                prev=v[x].first;
            }
            else{
                //chech that does you have some fueling station in the priority queue
                if(pq.empty()){
                    flag=1;
                    break;
                }
                //otherwise refuel the tank with higher capacity fuel station
                F=F+pq.top();
                //remove that station from priority queue
                pq.pop();
                ans+=1;
                continue;
            }
            x++;
        }
        //actually travelled through n fuel stations
        //what is left that you have reached the town from nearest fuel station
        if(flag==1){
            cout<<-1;
            continue;
        }
        //otherwise
        D=D-v[n-1].first;
        if(F>=D){
            cout<<ans<<endl;
            continue;
        }
        //otherwise
        if(F<D){
            if(pq.empty()){
                flag=1;
                break;
            }
            F=F+pq.top();
            pq.pop();
            ans+=1;
        }
        if(flag==1){
            cout<<-1;
            continue;
        }
        cout<<ans<<endl;
    }   
}
