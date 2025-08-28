#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
int x=3;
int found=0;
for (int i = 0; i < n; i++)
{
    if (arr[i]==x)
    {
        found=1;
        break;
    }
    
}
if (found==1)
{
    printf("%d is present in the array.\n",x);
}
else{
    printf("%d not present in the array.\n",x);
}
return 0;

}
