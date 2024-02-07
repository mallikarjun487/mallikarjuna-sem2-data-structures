#include<stdio.h>
int main(){
 int i,n,k,a[10];
   for(i=0;i<5;i++){
     scanf("%d",&a[i]);
     }
   printf("enter index:");
   scanf("%d",&n);
    for(i=n;i<4;i++){
     a[n]=a[n+1];
     }
   for(i=0;i<4;i++){
     printf(" %d",a[i]);
     }
     return 0;
}
