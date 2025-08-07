#include <stdio.h>
int main()
{
    int row,colum,sp,n=5;
    for ( row= 0; row<5; row++)
    {
        for (sp=0; sp<=n-1-row; sp++)
        {
            printf(" ");
        }
        
        for (colum= 0; colum<=row; colum++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}