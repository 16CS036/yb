#include <stdio.h>

int main()
{
    char s[100];
    int i,count=0,l;
    printf("enter the string");
    scanf("%[^\n]%*c",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
