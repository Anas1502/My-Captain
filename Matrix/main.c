#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[3][3],i,j;
    printf("Enter the elements of matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("The matrix is: \n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
