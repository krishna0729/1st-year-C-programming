#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
for(i=0;i<=5;i++)
{
for(j=0;j<=6;j++)
{
if(i==0 && j%3 !=0|| i==1 && j%3==0 || i-j==2 || i+j==8)
{
printf("*");
}
else
{
printf(" ");
}
}
printf("\n");
}
getch();
}