#include <stdio.h>

int main()
{
    int min,hrs;
    printf("enter the minutes");
    scanf("%d",&min);
    hrs=min/60;
    min=min%60;
    printf("%d\t%d",hrs,min);

    return 0;
}
