#include <stdio.h>

int main() {
    int i=0,count=0,prev=0,j=0;
    char str1[10],str2[10];
    
    printf("Enter string1 :");
    scanf("%s",str1);
    printf("\nEnter string2 :");
    scanf("%s",str2);
     
    printf("\n longest common subseqeuence is: ");
    while(str2[j]!='\0')
    {
        
        if(i==prev)
            prev=i;
        else
            i=prev+1;
        while(str1[i]!='\0')
        {
            if(str2[j]==str1[i]) 
            {
                printf("%c",str2[j]);
                count++;
                break;
            }
            i++;
        }
        j++;
    }
    printf("\nLength of longest common subsequence is: %d",count);
    return 0;
}
