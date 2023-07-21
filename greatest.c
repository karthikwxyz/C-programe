/*Greatest among three numbers */

#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the a value:");
scanf("%d",&a);
printf("Enter the b value:");
scanf("%d",&b);
printf("Enter the c value:");
scanf("%d",&c);
if(a>b&&a>c)
{
printf("\n a is the biggest number");
}
else if(b>c)
{
printf("\n b is the biggest number");
}
else
printf("c is the biggest number");

}
