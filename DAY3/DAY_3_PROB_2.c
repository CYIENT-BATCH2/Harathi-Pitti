
#include <stdio.h>
int main()
{
  int num,rem,count=0,sum=0;
  printf("Enter the 5 digit number\n");
  fflush(stdout);
  scanf("%d",&num);
  label:
  if(num>0)
  {
      rem=num%10;
      count++;
      if((count==2) || (count==5))
      {
          sum=sum+rem;
      }
    num=num/10;
    goto label;
  }
  printf("sum=%d\n",sum);
}

