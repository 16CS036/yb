#include <stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int n,i,count=0,l,flag=0;
    printf("enter the string");
    scanf("%[^\n]%*c",&s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if((s[i]>='a'&&s[i]<='b')||(s[i]>='0'&&s[i]<='9')||(s[i]>='A'&&s[i]<='Z')||(s[i]>=' '&&s[i]<='.'))
        {
            flag++;
        }
        else
        {
            count++;
        }
    }
    printf("%d",count);


    return 0;
}
