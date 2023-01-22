#include<stdio.h>
#include<conio.h>
void main()
{
int max=0,nmax=0,t,i,j,A[10]={1,2,3,4,5,6,7,8,9,10};
clrscr();
for(i=0;i<=9;i++)
{
printf("\n%d",A[i]);
}
getch();
for(i=0;i<=9;i++)
{
if(A[i]>nmax)
{
if(A[i]>max)
{
t=max;

max=A[i];
nmax=t;
}
else
{
nmax=A[i];
}
}
}
printf("%d",nmax);
getch();
}