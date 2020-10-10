//Sorting Array With this Function
template<class T> void Selectionsort(T *arr,int size)
{
int i,j,min;
double temp;
for(int i=0;i<size-1;i++)
{
	min=i;
	for(j=i+1;j<size;j++)
	{
		if(arr[j]<arr[min])
		{
			min=j;
		}
		}
	temp=arr[i];
	arr[i]=arr[min];
	arr[min]=temp;
}
}
//Defining Array Elements
template<class T> void createArray(T *p,int size)
{
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>p[i];
	}
}
//Displaying Array Elements
template<class T> void showArray(T *p,int size)
{
	cout<<"The elements of the array are:"<<endl;
	for(int i=0;i<size;i++)
	{
cout<<" "<<p[i];
	}
}
int main()
{
	int size,size1;
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	int arr[size];
	cout<<"With integer array"<<endl;
	createArray(arr,size);
	showArray(arr,size);
	cout<<"Selection sort:"<<endl;
	Selectionsort(arr,size);
	showArray(arr,size);
	cout<<"With float array"<<endl;
	cout<<"Enter the size of the float array"<<endl;
	cin>>size1;
	double arr1[size1];
	createArray<double>(arr1,size1);
	showArray<double>(arr1,size1);
	cout<<"Selection sort"<<endl;
	Selectionsort<double>(arr1,size1);
	showArray<double>(arr1,size1);
	return 0;
}
