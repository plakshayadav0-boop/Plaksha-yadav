#include<stdio.h>
int num;
printf("enter the number: ");
scanf("%d", &num);
if (num<0)
{
    printf("error!factorial of negative number dosent exsist");
}
else
{
    for(i=1;i<=num;i++)
    fact= fact*i;
    printf("factorial of %d",fact);
    return 0;
}