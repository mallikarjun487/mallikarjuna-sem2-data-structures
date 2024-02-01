#include<stdio.h>
int main(){
	int arr[100];
	int i,n,j,k=0;
	printf("Enter number of elements :");
	scanf("%d",&n);
	printf("enter elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){ 
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j])
			k++;
			break;
		}
		
	}
	printf("count of total number of duplicate elements : %d",k);
	return 0;
}
