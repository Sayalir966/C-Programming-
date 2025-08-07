#include <stdio.h>
int main()
{
    int row,colum,sp,n=5;
    for ( row= 1; row<=5; row++)
    {
        for (sp=0; sp<=n-row; sp++)
        {
            printf(" ");
        }
        
        for (colum= 1; colum<=2*row-1; colum++)
        {
            printf("%d",row);
        }
        printf("\n");
        
    }
    
}