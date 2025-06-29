#include<stdio.h>
int greater (int a , int b){
if (a>b ){
    return a;
} else {
    return b;
}
}
int main(){
    int a, b ;
    printf("Write the two numbers:\n");
    scanf("%d %d",&a , &b );



    printf("The greater number is:%d", greater(a,b));
    return 0;
}