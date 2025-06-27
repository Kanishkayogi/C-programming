#include<stdio.h>
int add( int a, int b ){
    int sum = a + b;
    return sum;
}
int main(){
    int a , b, sum;
    printf("The 2 integers is:");
    scanf("%d %d", &a , &b);
    sum = add(a,b);

    printf("The sum is:%d\n", sum);


    return 0;
}

