#include <stdio.h>

int main()
{
    int a,b,r,gcd,x,y,lcm;
    scanf("%d",&a);
    scanf("%d",&b);
    x=a;
    y=b;
    do{
        r=a%b;
        if(r==0)
        break;
        a=b;
        b=r;
    }while(r!=0);
    gcd=b;
    lcm=(a*b)/gcd;
    printf("%d",lcm);
    return 0;
}
