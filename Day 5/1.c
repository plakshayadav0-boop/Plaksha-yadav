#include<stdio.h>
int main()
{
   int num,sum=0;
   printf("enter the number");
   scanf("%d",&num);
   for(int i=1;i<=num/2;i++)
   {
    if(num%i==0)
    {
      sum=sum+i;
    }

 }
 if(sum==num && num!=0)
 {
  printf("enterd number is perfect");
 }
 else
 {
  printf("entered number is not perfect");
 }
 return 0;
}