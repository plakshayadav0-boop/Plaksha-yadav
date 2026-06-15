#include<stdio.h>
int main()
{
int num;
int count=0;
printf("enter the integer :");
scanf("%d", &num);
int temp=num;
do{
    count++;
    temp=temp/10;
}
while(temp!=0);
printf("the number of digits:%d",count);
return 0;
}