
#include <stdio.h>

int main()
{
   char ch;
   printf("Enter a charcter\n");
   fflush(stdout);
   scanf("%c",&ch);
   if(ch =='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
   printf("%c is a vowel\n",ch);
   else
   printf("%c is a constant\n",ch);
   return 0;
}

