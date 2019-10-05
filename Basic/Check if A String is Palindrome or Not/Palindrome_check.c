#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    int i, length;
    int flag = 0;
    
    printf("Enter a string:");
    scanf("%s", str);
    
    length = strlen(str);
    
    for(i=0;i < length ;i++){
        if(str[i] != str[length-i-1]){
            flag = 1;
            break;
   }
}
    
    if (flag) {
        printf("%s is not a palindrome!!!", str);
    }    
    else {
        printf("%s is a palindrome!!!", str);
    }
    return 0;
}
