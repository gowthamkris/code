#include <stdio.h>
#include <math.h>

int main()
{
    int low, hi, i, temp1, temp2, remainder, n = 0, r = 0;

    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d an %d are: ", low, hi);

    for(i = low + 1; i < high; ++i)
    {
        temp2 = i;
        temp1 = i;
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }
        while (temp2 != 0)
        {
            remainder = temp2 % 10;
            r += pow(remainder, n);
            temp2 /= 10;
        }
        if (r == i) {
            printf("%d ", i);
        }
        n = 0;
        r = 0;

    }
    return 0;
}
