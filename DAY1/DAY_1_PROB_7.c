
#include <stdio.h>

int main()
{
    int n,n1,rem,rev=0;
    printf("Enter a number\n");
    fflush(stdout);
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        rem = n % 10;
        rev = rev*10+rem;
        n = n/10;
    }
   if(n1==rev)
   {
	   printf("The given number is palindrome number");
   }
   else
   {
	   printf("The given number is not palindrome number");
   }

}




