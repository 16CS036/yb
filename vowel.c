#include <stdio.h>

int main()
{
    char s[10];
     int l,i,flag=0;
     printf("enter the string");
     scanf("%s",s);
     l=strlen(s);
     for(i=0;i<=l;i++)
     {
         if(s[i]=='a'||s[i]=='A'&&s[i]=='e'||s[i]=='E'&&s[i]=='i'||s[i]=='I'&&s[i]=='o'||s[i]=='O'&&s[i]=='u'||s[i]=='U')
         {
             flag=1;
             break;
         }
     }
     if(flag==1)
     {
         printf("yes");
     }
     else
     {
         printf("no");
     }


    return 0;
}
