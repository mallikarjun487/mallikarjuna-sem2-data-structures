#include<stdio.h>
int main(){
	int arr[10],i,n;
	printf("enter the number of values :");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=n;i>=0;i--){
		printf("%d",arr[i]);
	}
	return 0;	
}