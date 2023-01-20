#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int c,f ;
printf("Enter the temperature in celcius");
scanf("%d",&c);
f=c*9/5+32;
printf("The temperature in fahernhrit will be %d",f);
getch();
}