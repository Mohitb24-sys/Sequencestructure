#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("ENTER THE NUMBER: \n");
scanf("%d",&a);
if(a % 7 == 0)
{
printf("%d is divisible by 7 \n",a);
}
else
{
printf("%d is not divisible \n",a);
}
getch();
}
