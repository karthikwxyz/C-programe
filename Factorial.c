/* factorial using while loop */

#include<stdio.h>
int main()
{
int n;
int count=1;
long res=1;
printf("Enter the n value:");
scanf("%d",&n);
while(count<=n)
{
res=res*count;
count++;
}
printf("\n Factorial of %d is %1d",n,res);
}
