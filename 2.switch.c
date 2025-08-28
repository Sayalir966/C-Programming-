#include<stdio.h>
#include<stdlib.h>
int main(){
int a,b,choice;
printf("Enter two number");
scanf("%d%d",&a,&b);
while(1)
{
printf("enter an arithematic operations (1-add,2-sub,3-mul,4-div\n, 5-0):");
scanf("%d",&choice);
printf("Enter choice");
scanf("%d",&choice);
switch(choice)
{
		case 1: int sum = a+b;
			printf("Sum = %d\n",sum);
			break;
		case 2: int sub = a-b;
			printf("Sub = %d\n",sub);
			break;
		case 3: int mul = a*b;
			printf("Mul = %d\n",mul);
			break;
		case 4: float div = (float)a/b;
		
			printf("div = %f\n",div);
			break;
        case 5: exit(0);
        printf("Exit succesfully");
}
}
	return 0;

}


