
#include <stdio.h>
int main()
{
    int num,pos,a,b,c,d;
    printf("Enter the number\n");
    fflush(stdout);
    scanf("%d",&num);
    printf("Enter the bit position\n");
    scanf("%d",&pos);
    a=num|1<<pos;
    b=num&~(1<<pos);
    c=num^1<<pos;
    d=num&num-1;
    printf("%d %d %d %d\n",a,b,c,d);
}
