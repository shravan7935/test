
#include <stdio.h>
void main(){
    int num,remainder,original,rev=0;
    printf("enter the number:");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        remainder =num%10;
        rev = rev*10 + remainder;
        num = num/10;
    }
    if(original==rev)
     printf("palindrome number ");
    else 
     printf("not a palindrome number");
}