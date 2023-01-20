#include<stdio.h>
#include<conio.h>
void fun(int);
int x,y;
void main()
{
clrscr();
printf("Enter any number");
scanf("%d",&x);
fun(x);
getch();
}
void fun(int y)
{
y=x%2;
if(y==0)
printf("Even");
else
{
printf("Odd");
}
}
getch();
