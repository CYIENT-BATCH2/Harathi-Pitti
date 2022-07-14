
#include <stdio.h>

int main()
{
    float celsius,farenheit;
    int choice;
   scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter celsius\n");
        fflush(stdout);
        scanf("%f",&celsius);
         farenheit = (1.8*celsius)+32;
         printf("%f",farenheit);
    }
    if(choice == 2)
    {
        printf("Enter farenheit\n");
        fflush(stdout);
        scanf("%f",&farenheit);
        celsius = (farenheit - 32)*5/9;
        printf("%f",celsius);
    }
    return 0;
}
