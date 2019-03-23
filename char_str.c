#include <stdio.h>

int main()
{
    char s[10];
    int i,n;
    printf("enter the string");
    scanf("%s",s);
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("%c",s[i]);
    }
    return 0;
}
