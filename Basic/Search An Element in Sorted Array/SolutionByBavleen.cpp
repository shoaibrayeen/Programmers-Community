/*
 Program Description - This program finds the element from the array.
 Solution Description: Applied Binary Search using recursion to check whether the element is present or not in the array.
*/

#include <stdio.h> 
#include<iostream>

using namespace std;
  
bool BinarySearchElement(int* array, int start, int end, int element) 
{ 
   if (end >= start) 
   { 
        int mid = start + (end - start)/2; 
        if (array[mid] == element) 
		{
			return true;	
		}  
        if (array[mid] > element) 
		{
        	return BinarySearchElement(array, start , mid - start, element);	
		} 
		else
		{
		   return BinarySearchElement(array, mid+1, end, element); 	
		}
   } 
	else
	{
		return false;		
	}
} 
  
int main() 
{ 
	int len;
	int element;
	
   cout<<"Enter the size of Array :"<<endl;
   cin>>len;
   int *array = new int[len]; 
   cout<<"Enter the Array: "<<endl;
   for(int i = 0; i< len ; i++)
   {
   		cin>>array[i];
   }
   cout<<"Enter the element to be searched: "<<endl;
   cin>>element;
   
   bool output = BinarySearchElement(array, 0, len - 1, element); 
   if(output)
    {
   		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	} 
return 0; 
} 
