#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("original array elements ");
    for (int i = 0; i <size ; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    printf("array elements in reverse order ");
    for (int i = size-1; i >=0; i--)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
    
    
}