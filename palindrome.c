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
         if(s[i]!=s[l-i-1])
         {
             flag=1;
             break;
         }
     }
     if(flag)
     {
         printf("not palindrome");
     }
     else
     {
         printf("palindrome");
     }


    return 0;
}
