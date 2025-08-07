#include<stdio.h>
int main(){
    int x=10;
    int y=5;
    int a;
    int b;
    printf("value of x=%d\n",x);
    a=x++;
     printf("value of a=%d\n",a);
      printf("value of x=%d\n",x);

      b=++x;
      printf("value of b=%d\n",b);
      printf("value of x=%d\n",x);
}