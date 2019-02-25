#include <stdio.h>

int main()
{
    int a[10],n,i,s;
    printf("enter the integer");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    s=a[0];
    for(i=0;i<n;i++)
    {
      if(s>a[i])
      {
          s=a[i];
      }
    }
    printf("%d",s);

    return 0;
}
