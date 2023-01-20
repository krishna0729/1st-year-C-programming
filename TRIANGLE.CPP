#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter side 1 :\n");
scanf("%d",&a);
printf("Enter side 2 :\n");
scanf("%d",&b) ;
printf("Enter side 3 :\n");
scanf("%d",&c);
{
if(a==b&&b!=c||b==c&&a!=c)
{
printf("It is an isoceles triangle");
}
else if(a==b&&b==c)
{
printf("It is an equilateral traingle");
}
else
{
printf("It is an scalene traingle");
}
}
getch();
}
