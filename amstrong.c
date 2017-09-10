#include <stdio.h>
int main()
{
    int n, originalNumber, remainder, r = 0;
    scanf("%d", &n);

    originalNumber = n;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        r += remainder*remainder*remainder;
        originalNumber /= 10;
    }

    if(r == n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);

    return 0;
}
