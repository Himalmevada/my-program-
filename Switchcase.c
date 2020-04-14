#include<stdio.h>
#include<conio.h>
void main()
{
    int choice=0;
    printf("Your Menu =>");
    printf("\n1.Pizza,Rs 230\n2.Dosa,Rs 130\n3.Pasta,Rs 320\n4.Sandwich,Rs 225\n5.French Fries,Rs 150\n");
    printf("\nEnter Your Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\nFood item - Pizza");
        printf("\nPrice - Rs 230");
        break;

    case 2:
        printf("\nFood item - Dosa");
        printf("\nPrice - Rs 130");
        break;

    case 3:
        printf("\nFood item - Pasta");
        printf("\nPrice - Rs 320");
        break;

    case 4:
        printf("\nFood item - Sandwich");
        printf("\nPrice - Rs 225");
        break;

    case 5:
        printf("\nFood item - French Fries");
        printf("\nPrice - Rs 150");
        break;

    default:
        printf("\nInvalid Choice");
    }
getch();
}
