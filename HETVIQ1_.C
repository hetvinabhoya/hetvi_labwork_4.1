#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c;
clrscr();
printf("enter the value of a: ");
scanf("%d",&a);
printf("enter the value of b: ");
scanf("%d",&b);
printf("before swapping a=%d and b=%d\n",a,b);
c=a;
a=b;
b=c;
printf("after swapping a=%d and b=%d",a,b);
getch();
}