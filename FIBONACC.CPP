#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a=0,b=1,total,i,n;
printf("Enter the number of terms :");
scanf("%d",&n);
printf("fibonacci series is :");
for(i=0;i<=n;i++)
{
if(i<=1)
total=1;
{
total=a+b;
a=b;
b=total;
}
printf("\n%d",total);
}
getch();
}