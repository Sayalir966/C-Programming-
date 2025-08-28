#include<stdio.h>
int countfreeq(int arr[],int n,int target){
    int res=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==target)
        res++;
        
    }
    return res;
}
int main(){
    int arr[]={0,1,1,2,2,2,3,4,4,4};
    int target=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",countfreeq(arr,n,target));
    return 0;
}