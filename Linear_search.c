#include<stdio.h>
int main(){
	int i,n,arr[10],target;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("The elements are :\n");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\nEnter the number to search :");
	scanf("%d",&target);
	for(i=0;i<n;i++){
		if(arr[i]==target){
			printf("The number %d is found: %d",target,i+1);
			break;
		}
	}
	if(i==n){
		printf("The number is not found");
	}
	
	return 0;
}
