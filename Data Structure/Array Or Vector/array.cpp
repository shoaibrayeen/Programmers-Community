#include <iostream>
using namespace std;

int main()
{
	int arr[100];
	int i=0;
	int l =0;
	float sum = 0;
	float mean;
	int j,n,t,k,pos,loc,item,repeat,temp;

	cout<<"Input the size of array:\n";
	cin>>n;
	cout<<"Input array elements:\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	//these must be declared after the array elements are input
	label:
		int small = arr[0];
		int large = arr[0];

	cout<<"\nSelect the operation number you want to perform:\n 1. Smallest number in the array.\n 2. Largest number in the array.\n 3. Mean of the array.\n 4. Print the array.\n 5. Insert element in the array.\n 6. Delete element from the array.\n 7. Sorting the elements in the array.\n";
	cin>>t;

	switch (t)
	{
	case 1:
			while(i<n)
		{
			if(small>arr[i])
			{
				small=arr[i];
			}
			i++;
		}
		cout<<"Smallest number in the array is ";
		cout<<small;
		break;

	case 2:
			while(l<n)
		{
			if(large<arr[l])
			{
				large=arr[l];
			}
			l++;
		}
		cout<<"Largest number in the array is ";
		cout<<large;
		break;

	case 3:
			for(int i=0;i<n;i++)
		{
			sum=sum+arr[i];
		}
		mean=sum/n;

		cout<<"\nThe mean of the input elements is ";
		cout<<mean;
		break;

	case 4:
			for(int i=0;i<n;i++)
		{
		cout<<arr[i];
		}
		break;

	case 5:
		cout<<"Enter the position you want to insert the element: ";
		cin>>pos;
		
		if(pos<0||pos>n){ cout<<"INVALID POSITION!\n";	}
		
		cout<<"Enter the element: ";
		cin>>item;

		loc=pos-1;
		k=n-1;
		while (k>=loc)
		{
			arr[k+1]=arr[k];
			k--;
		}
		arr[loc]=item;
		n=n+1;

		cout<<"The new array is: ";
		{
			for(int j=0;j<n;j++)
		{	cout<<arr[j];
			cout<<"\t"	;	}
		}
		break;

	case 6:
		cout<<"Enter the position you want to delete the element: ";
		cin>>pos;
		if(pos<0||pos>n){ cout<<"INVALID POSITION!\n";	}

		loc=pos-1;
		k=loc;
		while(k<n)
		{
			arr[k]=arr[k+1];
			k++;
		}
		n=n-1;

		cout<<"The new array is: ";
		{
			for(int j=0;j<n;j++)
		{	cout<<arr[j];
			cout<<"\t";			}
		}
		break;

	case 7:

		for(int i=0;i<n-1;i++)
		{
			for (j=0;j<n;j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		}

		cout<<"\nThe new array is: ";
		{
			for(int k=0;k<n;k++)
		{	cout<<arr[k];
			cout<<"\t";			}
		}

		break;
	}

	cout<<"\n\n\nWant to do it again?\n 1. YES. \n 2. NO.\n";
	cin>>repeat;
	if (repeat==1)
		{goto label;}
	else
		{ goto exit;}

	exit: ;

}
