#include <stdio.h>

int main()
{
    char s[10];
    int l;
    printf("enter the string");
    scanf("%s",s);
    l=strlen(s);
        if(l%2==0)
        {
            s[l/2]='*';
            s[l/2-1]='*';
        }
        else
        {
            s[l/2]='*';
        }
    printf("%s",s);
    return 0;
}
