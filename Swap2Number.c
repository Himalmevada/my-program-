#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("Enter A =>");
scanf("%d",&a);
printf("Enter B =>");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("\nSwapping of A and B New Value");
printf("\nA=>%d",a);
printf("\nB=>%d",b);
getch();
}
