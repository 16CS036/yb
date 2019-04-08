#include <stdio.h>

int main()
{
    char s[10],r[10];
    int i,k,j;
    printf("enter the string");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]>s[j])
            {
                r[k]=s[i];
                s[i]=s[j];
                s[j]=r[k];
            }
        }
    }
    printf("%s",s);
    return 0;
}
