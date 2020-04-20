#include<stdio.h>
void main()
{
    int data[3][3];
    int i,j,sum=0;
    printf("Enter nine different number=>\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&data[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Value data[%d][%d]=>%d\n",i,j,*(*(data+i)+j));
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum = sum +  (*(*(data+i)+j));
        }
    }
printf("\nSum of all the array element is => %d",sum);
}
