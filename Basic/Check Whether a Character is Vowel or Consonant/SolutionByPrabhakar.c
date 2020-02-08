#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
int isVowel(char a)
{
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    return 1;
    else
        return 0;
}
int main()
{
    char a;
 scanf("%c",&a);
 if(isalpha(a))
 {
     if(isVowel(a)){
        printf("Vowel");
     }
     else{
        printf("Consonant");
     }
 }
    return 0;
}
