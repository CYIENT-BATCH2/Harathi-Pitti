
#include <stdio.h>
int main()
{
    int age,birthyear,presentyear,birthmonth,presentmonth,month,year;
    printf("Enter the birth year and month\n");
    fflush(stdout);
    scanf("%d%d",&birthyear,&birthmonth);
    printf("Enter the present year and month\n");
    fflush(stdout);
    scanf("%d%d",&presentyear,&presentmonth);
    if(birthmonth<=presentmonth)
    {
        year=presentyear-birthyear;
        month=presentmonth-birthmonth;
    }
    else
    {
        year=presentyear-birthyear-1;
        month=(12-birthmonth)+presentmonth;
    }
    printf("age=%d year",year);
}

