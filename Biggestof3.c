#include <stdio.h>
int main(){
    int a1,a2,a3,largest;
    printf("Enter 3 numbers");
    scanf("%d%d%d",&a1,&a2,&a3);
    if (a1 >=a2 && a1 >= a3)

{
    largest=a1;
}
else
if (a2>=a1 && a2>=a3)
{
 largest=a2;   /* code */
}
else

{
 largest=a3;   /* code */
}
printf("the largest num is:%d\n",largest);
}