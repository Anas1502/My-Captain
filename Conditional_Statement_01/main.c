#include <stdio.h>
#include <stdlib.h>
int main()
{   int grade;
    printf("Enter the Grade:");
    scanf("%d",&grade);
    if(grade>=85 && grade<=100)
        printf("Grade A");
    else if(grade>=70 && grade<84)
        printf("Grade B");
    else if(grade>=55 && grade<69)
        printf("Grade C");
    else if(grade>=40 && grade<54)
        printf("Grade D");
    else if(grade>=0 && grade<40)
        printf("Grade E");
    else
        printf("Grade F");
    return 0;
}
