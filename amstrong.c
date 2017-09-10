
 
#include <stdio.h>
 
int main()
{
    int n, sum=0, rem=0,temp;
    scanf("%d", &n);
 
    temp=n;
 
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum + (rem*rem*rem);
        temp/=10;
    }  
 
    if(sum==n)  
        printf("%d",n);
    else
        printf("%d",n);
 
    return 0;
}
