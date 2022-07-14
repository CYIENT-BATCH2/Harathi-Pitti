
#include <stdio.h>
#define pi 3.1412
int main()
{
    float r;
    float a;
    printf("Enter a radius\n");
    fflush(stdout);
    scanf("%f",&r);
    a = 3.1412*r*r;
    printf("Total area of circle is %f\n",a);
}


