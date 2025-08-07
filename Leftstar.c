#include <stdio.h>
int main()
{
    int row,colum;
    for ( row= 0; row<5; row++)
    {
        for (colum= 0; colum<=row; colum++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}