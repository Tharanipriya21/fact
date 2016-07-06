#include<stdio.h>
#include<conio.h>
void main()
{
int n,fact=1,i;
printf("enter the number to find factorial");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  if(n==0)
  fact=1;
  else
fact=fact*i;
}
printf("the factorial of %d is %d",n,fact);
getch();
}
