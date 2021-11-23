#include <stdio.h>
#include <stdlib.h>

struct employee{
    char Name[20];
    int Age;
    unsigned long Phone;
    float salary;
}stru[20];

int main()
{
    //for 20 employees.
    for(int i=0;i<20;i++)
    {
          printf("Enter the Name: "); scanf("%s",&stru[i].Name);
          printf("Enter the Age: "); scanf("%d",&stru[i].Age);
          printf("Enter the Phone: "); scanf("%lu",&stru[i].Phone);
          printf("Enter the Salary: "); scanf("%f",&stru[i].salary);
    }
    printf("Name\t Age \t Phone\t\t Salary\t " );
    printf("\n");
     for(int i=0;i<20;i++)
    {
           printf("%s \t",stru[i].Name);
           printf("%d \t",stru[i].Age);
           printf("%lu \t",stru[i].Phone);
           printf("%f",stru[i].salary);
    }

    return 0;
}
