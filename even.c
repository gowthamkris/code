#include <stdio.h>
int main()
{
    int l1, h1, i, f1;
    scanf("%d %d", &l1, &h1);

    printf("Prime numbers between %d and %d are: ", l1, h1);

    while (l1 < h1)
    {
        f1 = 0;

        for(i = 2; i <= l1/2; ++i)
        {
            if(l1 % i == 0)
            {
                f1 = 1;
                break;
            }
        }

        if (f1 == 0)
            printf("%d ", l1);

        ++l1;
    }

    return 0;
}
