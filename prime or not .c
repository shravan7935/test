// Online C compiler to run C program online
#include <stdio.h>
void main(){
    int i,n,flag =0;
    printf("enter the number:");
    scanf("%d",&n);
    if(n<=1){
     flag=1;
    }
    else
    {
     for(i=2;i*i<=n;i++){
         if(n%i==0){
          flag =1;
          break;
     }
  }
}
if(flag==0)
 printf("prime number ");
else
 printf("not a prime number ");
}