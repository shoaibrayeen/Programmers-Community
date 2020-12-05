#include <stdio.h>

void quicksort(int *number,int first, int last){
    int i,j,pivot,temp;
    
    if (first<last){
        pivot=first;
        i=first;
        j=last;
        
        while(i<j){
            while(number[i]<=number[pivot]&&i<last)
            i++;
            while(number[j]>number[pivot])
            j--;
            if(i<j){
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }
        temp=number[pivot];
        number[pivot]=number[j];
        number[j]=temp;
        quicksort(number,first,j-1);
        quicksort(number,j+1,last);
    }
}
void main(){
    int i, count;
    printf("How many elements are you going to enter?: ");
    scanf("%d",&count);
    int number[count];
    printf("Enter %d elements:",count);
    for(i=0;i<count;i++)
    scanf("%d",&number[i]);
    
    quicksort(number,0,count-1);
    for(i=0;i<count;i++)
    printf("%d",number[i]);
    getch();
}
