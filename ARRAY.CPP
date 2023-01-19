#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,t,a[10];
for(i=0;i<=9;i=i+1)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<=9;i=i+1)
 {
 printf("%d",a[i]);
 }
 for(i=0,j=9;i<=4;i++,j--)
 {
 t=a[i];
 a[i]=a[j];
 a[j]=t;
 }
 for(i=0;i<=9;i=i+1)
 {
 printf("%d",a[i]);
 }
 getch();
 }