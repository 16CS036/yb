#include <stdio.h>

int main()
{
    float l,b,h,area,volume;
    printf("enter the values");
    scanf("%f%f%f",&l,&b,&h);
    area=(l*b+b*h+l*h);
    volume=l*b*h;
    printf("%f",area);
    printf("%f",volume);

    return 0;
}
