#include<stdio.h>
#include<stdlib.h>
#include<time.h>


struct student{
    char name[30];
    int usn;
    
};



void show(struct student arr[], int low, int high)
{
    int i;
    for (i = low; i <= high; i++)
        printf("%s  %d\n", arr[i].name,arr[i].usn);

}

void takeInput(struct student arr[], int n)
{
    printf("Please enter %d names \n",n);
    for(int i=0;i<n;i++){
        scanf("%s",&arr[i].name);
    }
    for (int i = 0; i < n; i++)
        arr[i].usn = rand() % 1000 + 1;
}

int partition(struct student arr[],int low,int high){// heigh =n-1;
    int i=high+1;
    struct student temp;
    int pivot=arr[low].usn;
    for(int j=high;j>=low+1;j--){ // heigh to 1
        if(arr[j].usn>=pivot){ // low main pivot
            i--;
            temp=arr[j]; // temp =arr[heigh]
            arr[j]=arr[i]; // heigh <- low wali value
            arr[i]=temp;
        }
    }
    temp=arr[i-1]; 
    arr[i-1]=arr[low];
    arr[low]=temp;
    return i-1;
}

void quicksort(struct student arr[],int low,int high){
    if(low<high){
        //show(arr, low, high);
        //printf("\n");
        int partitionIndex=partition(arr,low,high);
        quicksort(arr,low,partitionIndex-1);
        quicksort(arr,partitionIndex+1,high);
       
    }
}



int main(){
    double time_spent = 0.0;
    int n;
    struct student *arr;
    printf("Enter the number of student\t");
    scanf("%d", &n);
    arr = (struct student *)malloc(n * sizeof(struct student));
    takeInput(arr, n);
    printf("Students unsorted \n");
    show(arr, 0, n - 1);
    printf("\n");
    clock_t begin = clock();
    quicksort(arr, 0, n - 1);
    printf("Students sorted \n");
    show(arr, 0, n - 1);
    printf("\n");
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds", time_spent);

}