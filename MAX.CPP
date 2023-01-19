#include<stdio.h>
#include<conio.h>
void main ()
{
int max=0,nmax=0,i,j,A[10]={3,23,24,26,25,27,28,30,29,30};
clrscr();
 for (i=0;i<=9;i++)
 printf("\n%d",A[i]);
 getch();

 for(i=0;i<=9;i++)
 {
 if(A[i]>max)
 {
 max=A[i];}
 }
 printf("\n The Highest value is : %d",max);
 getch();
 }