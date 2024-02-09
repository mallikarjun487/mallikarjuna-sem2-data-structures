#include<stdio.h>
int main(){
	int i,n,arr[10],target,low,middle,high;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("The elements are :");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\nEnter the elements to search : ");
	scanf("%d",&target);
	low=0;
	high=n-1;
	middle=(low+high)/2;
	while(low<=high){
		if(arr[middle]==target){
			printf("Element %d is found in place :%d",target,middle+1);
			break;
		}
		if(arr[middle]<target){
			low=middle+1;
			middle=(low+high)/2;
		}
		if(arr[middle]>target){
			high=middle-1;
			middle=(low+high)/2;
		}
	}
	if(low>high){
		printf("Element is not found");
	}
	return 0;
}