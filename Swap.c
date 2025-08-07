#include <stdio.h>
int main(){
    int a1,a2,x;
    printf("enter two number");
    scanf("%d %d",&a1,&a2);

    printf("Swap \n a1=%d,\n a2=%d",a1,a2);
    

    x=a1;
    a1=a2;
    a2=x;
    printf("After swaping\n a1=%d,\n a2=%d",a1,a2);

}