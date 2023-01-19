#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int st[1000]={-1};
int top=-1;
void push(int);
void pop();
void disp();
void main()
{
int ch;
do
{
clrscr();
 printf("1 push 2 pop 3 disp 4 exit");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1 :int val;
 printf("please enter the value");
 scanf("%d",&val);
 push(val);
 break;
case 2 : pop();
break;
case 3 : disp();
break;
case 4 : exit(0);
default : printf("wrong choice");
}
getch();
}while(1);
}
void push (int value)
{
if(top==9)
{printf("overflow");
}
else
{
top=1+top;
st[top]=value ;
}disp();
}
void pop()
{
if(top==-1)
{printf("underflow");
}
else
{
top--;
disp();
}
}
void disp()
{
int i;
for(i=top;i>=0;i--)
{
printf("\n%d",st[i]);
}
}
getch();
