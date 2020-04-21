#include <stdio.h>
int lcm(int,int);
int gcd(int,int);
void main()
{
    int a,b;
    printf("Enter Two Number =>");
    scanf("%d%d",&a,&b);
    printf("LCM of %d and %d is %d ", a, b, lcm(a, b));
}

int lcm(int a, int b)
{
    return (a*b)/gcd(a, b);
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
