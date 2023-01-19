#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,A[3][3];
for(i=0;i<=3;i++)
{
for(j=0;j<=3;j++);
{
printf("Enter A[%d][%d]:",i,j);
scanf("%d",&A[i][j]);
}
}
printf("Print the number:",i,j);
for(i=0;i<=3;i++)
{
printf("\n");
for(j=0;j<=3;j++)
{
printf("%d\t",A[i][j]);
}
}

getch();
}
