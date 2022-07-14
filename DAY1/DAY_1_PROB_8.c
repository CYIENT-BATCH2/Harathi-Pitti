#include <stdio.h>
int main()
{
	char ch;
	printf("Enter the character\n");
	fflush(stdout);
	scanf("%c",&ch);
	printf("%c and ASCII value = %d\n",ch,ch);
}
