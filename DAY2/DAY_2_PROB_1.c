
#include <stdio.h>

int main()
{
     int n;
    int sum=0,rem;
    printf("Enter a number\n");
    fflush(stdout);
    scanf("%d",&n);
    while(n!=0)
    {
        rem = n%10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("sum = %d",sum);
}
