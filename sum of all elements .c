#include<stdio.h>
int main(){
	int arr[10];
	int i,n,sum=0;
	printf("Enter the values : ");
	for(i=0;i<=5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=5;i++){
		sum+=arr[i];
	}
	printf("sum of the elements in an array :%d",sum);
	return 0;
}
