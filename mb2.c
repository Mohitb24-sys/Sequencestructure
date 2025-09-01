#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("ENTER Three NUMBERS:");
scanf("%d%d%d",&a,&b,&c);
if(a>=b && a>=c)
{
printf("a is largest \n",a);
}
if(b>=a && b>=c)
{
printf("b is largest \n",b);
}
else
{
printf("c is largest \n",c);
}
{
printf("for smallest number among three: \n");
}
if(a<=b && a<=c)
{
printf("a is smallest \n",a);
}
if(b<=a && b<=c)
{
printf("b is smallest \n",b);
}
else
{
printf("c is smallest \n",c);
}
getch();
}

