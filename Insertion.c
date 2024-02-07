#include<stdio.h>
int main(){
 int i,n,k,a[10];
   for(i=0;i<5;i++){
     scanf("%d",&a[i]);
     }
   printf("enter index:");
   scanf("%d",&n);
   if(n>=0&&n<6){
   printf("enter number:");
   scanf("%d",&k);
   for(i=5;i>=n;i--){
   a[i+1]=a[i];
   }
   a[n]=k;
   for(i=0;i<6;i++){
     printf(" %d",a[i]);
     }
     }
     else
      printf("invalid");
     return 0;
     }
    
