
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of students\n");
    fflush(stdout);
    scanf("%d",&n);
    printf("Enter no.of handshakers are %d\n",n*(n-1));
}

