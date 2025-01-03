
#include <stdio.h>
void main(){
    int num,remainder,rev=0;
    printf("enter the number:");
    scanf("%d",&num);
    while(num!=0){
        remainder =num%10;
        rev = rev*10 + remainder;
        num = num/10;
   
    }
    printf("reverse of the given number is %d",rev);
}