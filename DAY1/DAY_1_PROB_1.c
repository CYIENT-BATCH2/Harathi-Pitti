
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number\n");
    fflush(stdout);
    scanf("%d",&n);
    if(n%11==0||n%11==1)
    {
        printf("special\n");
    }
    else
    {
        printf("Not special\n");
    }
}

