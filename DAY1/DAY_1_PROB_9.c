
#include<stdio.h>
int main()
{
    int a;int b;
    printf("Enter two numbers\n");
    fflush(stdout);
    scanf("%d%d",&a,&b);
    printf("%d&&%d=%d\n",a,b,a&&b);
    printf("%d||%d=%d\n",a,b,a||b);
    printf("%d=%d\n",a,!a);
}


