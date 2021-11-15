#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the height of triangle: ");
    scanf("%d",&n);
    for(int i=0; i<n;i++)
    {
        for(int j=i;j>=0;j--)
        {
            printf("01");
        }
        printf("\n");
    }
    return 0;
}
