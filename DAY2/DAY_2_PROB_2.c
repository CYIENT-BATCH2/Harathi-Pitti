


#include <stdio.h>

int main()
{
  int num;int pos;
  printf("Enter the number\n");
  fflush(stdout);
  scanf("%d",&num);
  loop:
  if(pos=31 && pos>=0 && pos--)
  printf("%d",num>>pos & 1);
  goto loop;
}
















