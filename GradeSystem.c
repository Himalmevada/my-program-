#include<stdio.h>
#include<conio.h>
void main()
{
int mark;
printf("Enter Mark=>");//ENTER MARK UNDER 100//
scanf("%d",&mark);
if(mark>=85 && mark<=100)
    printf("Grade A");
else if(mark>=70 && mark<85)
    printf("Grade B");
else if(mark>=55 && mark<70)
    printf("Grade C");
else if(mark>=40 && mark<55)
    printf("Grade D");
else
    printf("Grade F");
getch();
}
