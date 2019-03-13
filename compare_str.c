#include <stdio.h>

int main()
{
    char s[10],g[10];
    int l,k;
    printf("enter the first string");
    scanf("%s",s);
    printf("enter the second string");
    scanf("%s",g);
    l=strlen(s);
    k=strlen(g);
    if(l<=k)
    {
        printf("%s",g);
    }
    else
    {
        printf("%s",s);
    }

    return 0;
}
