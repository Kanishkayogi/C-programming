#include<stdio.h>
  
int main(){
int digit;
printf("Enter a number:");
scanf("%d",&digit);
if(digit % 2 == 0){
    printf("it is a even number\n");
} else {
    printf("It is an odd number");
}
     return 0;
}