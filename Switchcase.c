#include<stdio.h>
int main(){

int num1 ,num2,result;
char operator;
printf("enter an operator(+,-,*,/):");
scanf("%c",&operator);
printf("enter two no.");
scanf("%d%d",&num1,&num2);
switch (operator)
{
case '+':
    result=num1+num2;
    printf("result is:%d",result);
    break;
    case '-':
    result=num1-num2;
    printf("result is:%d",result);
    break;
    case '*':
    result=num1*num2;
    printf("result is:%d",result);
    break;
    case '/': if(num2!=0){
    result=num1/num2;
    printf("result is:%d",result);
    break;
}else{
    printf("error;Division by zero is not allowed:\n");
    break;
}

default:
printf("error:invalid");
    break;
}
}