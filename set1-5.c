#include <stdio.h>

int main()
{
   int a,b,c;
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
   if(a>b&&a>c)
   {
       printf("a is greater");
   }
   else if(b>a&&b>c)
   {
       printf("b is greater");
   }
   else
   {
       printf("c is greater");
   }

    return 0;
}
