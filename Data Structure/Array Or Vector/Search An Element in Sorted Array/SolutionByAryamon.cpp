//to search the elements using binary search
#include<iostream.h>
#include<conio.h>
#include<process.h>

int bin_search(int a[], int size, int ele)
{
	int high=size-1,mid,low;
	for(low=0;low<=high;)
	{
		mid=(low+high)/2;
		if(a[mid]==ele)
		{
			return mid;
		}
		else if(a[mid]>ele)
		{
			high=mid - 1;
		}
		else
		{
			low=mid+1;
		}

	}
	return 0;
}


void main()
{
	clrscr();
	/********************input******************************/
	int size;
	cout << "\nEnter Size of Array\t:\t";
	cin >> size;
	int *a = new int[size];
	cout<<"\nEnter the elements of the array\n";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	int ele;
	cout<<"enter the element to be searched "<<endl;
	cin>>ele;
	/********************logic******************************/
	int returnVal = bin_search(a,size,ele);
	if ( returnVal == 0 ) {
		cout << "\nElement Not Found\n";
	}
	else {
		cout << "\nElement Found at " << returnVal << " Position\n";
	}
	getch();
}
