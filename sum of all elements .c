#include<stdio.h>
int main(){
	int a[10];
	int i,n,sum=0;
	printf("Enter the values : ");
	scanf("%d",&n);
	for(i=0;i<=5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<=5;i++){
		sum+=a[i];
	}
	printf("sum of the elements in an array :%d",sum);
	return 0;
}
