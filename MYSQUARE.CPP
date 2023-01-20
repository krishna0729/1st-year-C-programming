#include<stdio.h>
#include<conio.h>
#define mysq(a) (a)*(a)
 void main()
 {
 clrscr();
 int i,j;
 for(i=0;i<=40;i++)
 {
 ///scanf("%d",&i);
 j=mysq(i);
 printf("\n%d",j);
 }
 getch();
 }
