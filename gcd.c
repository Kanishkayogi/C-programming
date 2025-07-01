#include<stdio.h>
int gcd(int a , int b ,int c ){
    int gcd = 1;
    while(c <= a && c <= b){
    if(a % c ==0 && b % c == 0){
       gcd = c;
    }
    c++;
     }
     return gcd;
    }
int main(){
    int a,b,c = 1;
    printf("Write two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("The greatest common divisor is :%d\n",gcd(a,b,c));
     
    return 0;

}