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
           l--;
       }
       count++;
   }
   printf("%d",count);

    return 0;
}

