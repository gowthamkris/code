#include <stdio.h>
int main()
{
    int low, hi, i, fl;
    printf("Enter two numbers(intervals): ")
    scanf("%d %d", &low, &hi);

    printf("Prime numbers between %d and %d are: ", low, hi);

    while (low < hi)
    {
        fl = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                fl = 1;
                break;
            }
        }

        if (fl == 0)
            printf("%d ", low);

        ++low;
    }

    return 0;
}
