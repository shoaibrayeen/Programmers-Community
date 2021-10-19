#include <stdio.h>
#include <string.h>
int f[20];
void failure(char p[],int f[])
{
    int i=0,k=1;
    f[0]=0;
    while(k<strlen(p))
    {
        if(p[i]==p[k])
        {
            f[k]=i+1;
            i++;
            k++;
        }
        else
        {
            if(i==0)
            {
                f[k]=i;
                k++;
            }
            else
                i=f[i-1];
        }
    }
}

int patternmatch(char t[],char p[])
{
    int i=0,j=0;
    while (i<strlen(t)&&j<strlen(p))
    {
        if(t[i]==p[j])
        {
            i++;
            j++;
        }
        else
        {
            if(j==0)
                i++;
            else
                j=f[j-1];
        
        }
    }
    if(j==strlen(p))
        return i-strlen(p);
    else
        return -1;
}
int main()
{
    int i;
    char text[100],pat[20];
    printf("Enter text string\n");
    scanf("%s",text);
    printf("Enter pattern matching\n");
    scanf("%s",pat);
    failure(pat,f);
    i=patternmatch(text,pat);
    if(i!=-1)
        printf("Pattern present in the text string at index:%d",i);
    else
    printf("Pattern not found\n");
    return 0;
}
