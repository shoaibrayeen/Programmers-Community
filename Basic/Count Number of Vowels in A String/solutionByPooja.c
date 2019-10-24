//finding no.  of vowel in string
#include <stdio.h>

int main() {
    int i=0,count=0;
    char str[15],ch;
    
    printf("Enter string1 :");
    scanf("%s",str);
     
    
    while(str[i]!='\0')
    {
        ch=str[i++];
        switch(ch)
        {
            case 'a':
                 count++;
                 break;
            case 'e':
                 count++;
                 break;
            case 'i':
                 count++;
                 break;
            case 'o':
                 count++;
                 break;
            case 'u':
                 count++;
                 break;
            case 'A':
                 count++;
                 break;
            case 'E':
                 count++;
                 break;
            case 'I':
                 count++;
                 break;
            case 'O':
                 count++;
                 break;
            case 'U':
                 count++;
                 break;
        }
    }
    
    printf("\n No. of vowel in %s is: %d",str,count);
    
        
    return 0;
}
