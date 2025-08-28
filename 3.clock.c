#include<stdio.h>
int main(){
    int  h,m,s,total;

    printf("enter the value for hours");
    scanf("%d",&h);

    printf("enter the value for minutes");
    scanf("%d",&m);

    printf("enter the value for second");
    scanf("%d",&s);

    total=(h*60*60)+(m*60)+s;
    printf("total seconds are  %d\n",total);
    return 0;
}
