#include <stdio.h>    
     
int main()    
{    
    int i,n,arr1[100],arr2[100],length;
    printf("enter the number of elements in an array :");
    scanf("%d",&length);
    printf("enter the elements of array :");     
    for(i=0;i<length;i++)
    {
		scanf("%d",&arr1[i]);
	}  
	printf("enter the number of rotation :");
	scanf("%d",&n);  
	//copying elements to another array
	for(i=0;i<length;i++)
    {
	  arr2[i]=arr1[i];
    }     
    //Displays original array    
    printf("Original array: \n");    
    for (i = 0; i < length; i++) {     
        printf("%d ", arr1[i]);     
    }     
        
    //Rotate the given array by n times toward right    
    for(i = 1; i <= n; i++){    
        int j, last;    
        //Stores the last element of the array    
        last = arr1[length-1];    
        for(j = length-1; j > 0; j--){    
            //Shift element of array by one    
            arr1[j] = arr1[j-1];    
        }    
        //Last element of array will be added to the start of array.    
        arr1[0] = last;    
    }
    printf("\n");    
        
    //Displays resulting array after rotation    
    printf("Array after right rotation: \n");    
    for(int i = 0; i< length; i++){    
        printf("%d ", arr1[i]);    
    }     
    //Rotate the given array by n times towards left
    for(i = 1; i <= n; i++){    
        int j, first;    
        //Stores the first element of the array    
        first = arr2[0];    
        for(j = 0; j <length ; j++){    
            //Shift element of array by one    
            arr2[j] = arr2[j+1];    
        }    
        //Last element of array will be added to the start of array.    
        arr2[length-1] = first;    
    }    
    printf("\n");    
        
    //Displays resulting array after rotation    
    printf("Array after left rotation: \n");    
    for(int i = 0; i< length; i++){    
        printf("%d ", arr2[i]);    
    }    
    return 0;    
}    
