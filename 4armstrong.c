#include<stdio.h>
int powe(int remainder,int n){
    int i=0,temp=1;
    for ( i = 0; i < n; i++)
    {
        temp=temp*remainder;
    }
    return 0;
    
}
int isArm(int num){
 int ognum=num,remiander,result=0;
 int n=0;
 
 while (ognum!=0){
      ognum/=10;
      n++;
 }
 ognum=num;
 while (ognum!=0)
 {
 
    remiander=ognum%10;
    result+=remiander*remiander*remiander;
    ognum/=10;
 }
 return(result==num);
}
int main(){

int num;
printf("enter number ");
scanf("%d",&num);

    if (isArm(num))
    {
        printf("%d is an armstrong no. ",num);
    }
    else {
        printf("%d is an not armstrong no. ",num);

    }
    
}
