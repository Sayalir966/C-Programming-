#include <stdio.h>
void fib(int,int,int,int);
int main(){
    int x=0, y=1,z=x+y,n;

    printf("enter a number of terms");
    scanf("%d",&n);

    printf("fibonacci series:%d %d %d ", x,y,z);
    fib(x,y,z,n);
    return 0;
}
    void fib(int a,int b,int c,int n)
{
    // loop should execute how many times
    /* 
    int i = 3; // 3 terms have already been printed in main
    while(i<n){
        a = b; 
        b = c;
        c = a + b;

        printf("%d ",c);
       i++;
    }
       */
    for(int i = 3 ;i<n ; i++)
    {
        a = b; 
        b = c;
        c = a + b;

        printf("%d ",c);
    }
}
   
    
