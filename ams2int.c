#include <stdio.h>

int main()
{
    int l, h, i, a1, a2, r, n = 0, result = 0;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &l, &h);
    printf("Armstrong numbers between %d an %d are: ", l, h);
    for(i = l + 1; i < h; ++i)
    {
        a2 = i;
        a1 = i;
        while (a1 != 0)
        {
            a1 /= 10;
            ++n;
        }

        while (a2 != 0)
        {
            r = a2 % 10;
            result += pow(r, n);
            a2 /= 10;
        }

        if (result == i) {
            printf("%d ", i);
        }

        n = 0;
        result = 0;

    }

    return 0;
}
