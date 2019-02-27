#include <stdio.h>
#include<string.h>

int main()
{
   char s[100];
   int i,l,count=0;
   printf("enter the string");
   scanf("%[^\n]%*c",s);
   l=strlen(s);
   for(i=0;i<l;i++)
   {
       if(s[i]==' ')
       {
       count++;
       
       }
   }
   printf("%d",count+1);
   

    return 0;
}
