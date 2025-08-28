#include<stdio.h>
int main(){
    int  h,m,s,second;
    printf("enter value of second");
    scanf("%d",&s);

h=s/3600;
int totalm=s%3600;
m=totalm/60;
s=totalm%60;


printf("Second in time format:%d:%d:%d\n",h,m,s);
return 0;

}