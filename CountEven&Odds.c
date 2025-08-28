#include<stdio.h>
int array_count_oddeven(int [], int size);
int main(){
	int arr[5];
	printf("Enter array elements: ");
	for(int i=0;i<5;i++)
		scanf("%d", &arr[i]);

	array_count_oddeven(arr,5);
	return 0;
}

int array_count_oddeven(int arr[], int size){

	int count_even=0,count_odd=0;
	for(int i=0;i<size;i++){
		if(arr[i]%2 == 0)
			count_even++;
		else
			count_odd++;
	}
	printf("Even = %d, Odd = %d\n", count_even, count_odd);


}

