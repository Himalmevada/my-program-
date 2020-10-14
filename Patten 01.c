#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=1;i<=12;i++)
    {
    if(i%2==0){
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
      else
      {
           printf(" ");
      }
        }printf("\n");
    }
getch();
}
