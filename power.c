#include <stdio.h>
int main()
{
    int b1, exp;

    long long r = 1;
    scanf("%d", &b1);
    scanf("%d", &exp);

    while (exp != 0)
    {
        r*= b1;
        --exp;
    }

    printf("Answer = %lld", r);

    return 0;
}
