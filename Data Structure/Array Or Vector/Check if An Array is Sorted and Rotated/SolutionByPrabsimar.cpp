#include <iostream>
using namespace std;

int findPivot(int a[], int low, int high)
{
    if(high < low)
    {
    	return -1;
	}
    
    if(high == low)
    {
    	return low;	
	}   

    int mid = (high + low)/2;
    if(mid < high && a[mid+1] < a[mid])
    {
    	return mid;
	}
    
    if(mid > low && a[mid] < a[mid-1])
    {
    	return mid - 1;
	}   

    if(a[low] > a[mid])
    {
    	return findPivot(a,low,mid-1);
	}
    
    else 
    {
    	return findPivot(a,mid+1,high);
	}
}

bool isSortedRotated(int a[],int n)
{
    int low = 0;
    int high = n-1;
    int pivot = -1;

    if(a[low] > a[high])
    {
        pivot = findPivot(a,low,high);
        if(low < pivot)
        {
            while(pivot > low)
            {
                if(a[pivot] < a[pivot-1])
                {
                    return false;
                }
                pivot--;
            }
        }
        else{
            pivot++;
            while(pivot < high)
            {
                if(a[pivot] > a[pivot+1])
                {
                    return false;
                }
                pivot++;
            }
        }

        return true;
    }

    else
    {
        return false;
    }
}


int main()
{
    int n;
    cout << "size:" << endl;
    cin >> n;
    int a[n];
    cout << "Enter elements:" << endl;
    for(int i = 0;i < n;i++)
       cin >> a[i];
    
    if(isSortedRotated(a,n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}
