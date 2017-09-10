#include <stdio.h>
int main()
{
    int n1, i;
    scanf("%d",&n1);

    for(i=1; i<=10; ++i)
    {
        printf("%d * %d = %d \n", n1, i, n1*i);
    }
    
    return 0;
}
