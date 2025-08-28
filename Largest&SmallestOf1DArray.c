#include<stdio.h>
int main(){
int arr[20];
int i, max, min,n;
printf("how many elements ;\n");
scanf("%d",&n);


printf("enter the array");
for(i=0;i<n;++i)

    scanf("%d",&arr[i]);

max=min=arr[0];

for ( i = 1; i < n; ++i)
{
    if (arr[i]>max)
    max=arr[i];
    if (arr[i]<min)
     min=arr[i];

    
    
}

printf("largest no. is = %d\n",max);
printf("smallest no. is = %d\n",min);

return 0;
}