#include<stdio.h>
int fsum(int number);
int main()
{
    int num,result=0;
    printf("Enter Number =>");
    scanf("%d",&num);
    result=fsum(num);
    printf("Sum of digit in %d is %d",num,result);
    return 0;
}
int fsum(int number)
{
    if(number==0)
    {
            return 0;
    }
    else
    {
        return ((number % 10) + fsum(number / 10));
    }
}
