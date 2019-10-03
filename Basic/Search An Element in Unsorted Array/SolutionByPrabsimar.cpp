/*
 Program Description - This program finds the element from the Unsorted array.
 Solution Description: Applied Merge Sort for Sorting the array and then Binary Search using recursion to check whether the element is present or not in the array.
*/

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////
void merge(int* arr, int start, int mid, int end) //Sorting
{ 
    int i, j, k; 
    int n1 = mid - start + 1; 
    int n2 =  end - mid; 
  
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
    {
    	L[i] = arr[start + i];
	} 
        
    for (j = 0; j < n2; j++) 
    {
    	R[j] = arr[mid + 1+ j];
	} 
  
    i = 0;  
    j = 0;  
    k = start;
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
void mergeSort(int* arr, int start, int end) //Sorting
{ 
    if (start < end) 
    { 
        int mid = start+(end-start)/2; 
  
        mergeSort(arr, start, mid); 
        mergeSort(arr, mid+1, end); 
  
        merge(arr, start, mid, end); 
    } 
}
//////////////////////////////////////////////////////////////////////////////////////

bool binarySearch(int* arr, int start, int end, int element) //Searching
{ 
   if (end >= start) 
   { 
        int mid = start + (end - start)/2; 
  
        if (arr[mid] == element) 
		{
			return true;	
		}  
  
        if (arr[mid] > element) 
		{
        	return binarySearch(arr, start , mid - start, element);	
		} 
		else
		{
		   return binarySearch(arr, mid+1, end, element); 	
		}
   } 
	else
	{
		return false;		
	}
} 
////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	int size;
	int element;
	
   cout<<"Enter the size of Array :"<<endl;
   cin>>size;
   
   int *arr = new int[size]; 
   
   cout<<"Enter the Array: "<<endl;
   for(int i = 0; i< size ; i++)
   {
   		cin>>arr[i];
   }
   
   cout<<"Enter the element to be searched: "<<endl;
   cin>>element;
   
     mergeSort( arr, 0 , size-1 ); //Calling sorting function
   	
	bool result = binarySearch(arr, 0, size - 1, element); 
   
    if(result)
    {
   		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	} 
	
return 0; 

}
