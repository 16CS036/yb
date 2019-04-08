#include <stdio.h>

int main()
{
    char s[10];
    int i,l;
    printf("enter the string");
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<=l;i++)
    {
        if(s[i]>='0'&&s[i]>='9')
        {
            printf("%c",s[i]);
        }
    }
    
    return 0;
}
