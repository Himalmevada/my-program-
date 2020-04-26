#include<stdio.h>
struct employee
    {
        int empno;
        char empname[30];
        char dename[30];
        int salary;
    };

void display(struct employee []);//function definition//

int main()//main function//
{
struct employee data[20];
int i=0;
for(i=0;i<20;i++)
    {
        printf("Enter Employ N0 , Name , Department , salary of %d Employee ==>",i+1);
        scanf("%d",&data[i].empno);
        scanf("%s",data[i].empname);
        scanf("%s",data[i].dename);
        scanf("%d",&data[i].salary);
    }
display(data);//calling display function//
return 0;;
}

void display(struct employee data[20])//declaring function//here i used same name as data in function//
{
    int i=0;
    for(i=0;i<20;i++)
    {
            printf("\nEmployee No ->%d",data[i].empno);
            printf("\nEmployee Name ->%s",data[i].empname);
            printf("\nDepartment Name ->%s",data[i].dename);
            printf("\nEmployee salary ->%d\n",data[i].salary);
    }
}
