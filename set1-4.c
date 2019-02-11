#include<stdio.h>
int main()
{
    char a;
    clrscr();
    scanf("%c",&a);
    if(a>='a' && a<='z'||a>='A' && a<='Z')
    {
        printf("a is alphabet");
        
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
