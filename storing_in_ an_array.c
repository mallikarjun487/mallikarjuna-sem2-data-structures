#include<stdio.h>
int main(){
	int arr[10];
	int i;
	printf("Enter the array elements :");
	
	for(i=0;i<=10;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
}
