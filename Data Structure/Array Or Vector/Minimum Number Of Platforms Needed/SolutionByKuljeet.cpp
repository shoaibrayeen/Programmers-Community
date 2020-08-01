#include <iostream>
#include <algorithm>
using namespace std;

int findPlatform(int arr[], int dep[], int n)
{
    sort(arr,arr+n);
    sort(dep,dep+n);
    int max_plat = 1;
    int plat_need = 1;
    int i = 1, j = 0;
    while(i<n && j<n)
    {
        if(arr[i] <= dep[j])
        {
            max_plat++;
            i++;
        }
        else if(arr[i] > dep[j])
        {
            max_plat--;
            j++;
        }
        
        plat_need = max(plat_need,max_plat);
    }
    
    return plat_need;
}

int main() {
    int n;
    cin >> n;
    int arr[n],dep[n];
    for(int i= 0;i<n;i++)
        cin >> arr[i] >> dep[i];
    cout << findPlatform(arr,dep,n);
    
    return 0;
}
