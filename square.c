#include <stdio.h>

int main()
{
    
   int a,b,flag=0,pro,i;
   printf("Enter the numbers");
   scanf("%d%d",&a,&b);
   pro=a*b;
   for(i=1;i<=pro/2;i++)
   {
       if(i*i==pro)
       {
           flag=1;
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
