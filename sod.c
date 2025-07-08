#include<stdio.h>
    int sumofdigits(int n){
        int sum = 0;
        while(n != 0){
            sum += n % 10;
            n = n / 10;
        }
        return sum;
    }
    int main(){
        int n;
        printf("enter the number:\n");
        scanf("%d",&n);
        printf("sumofdigits : %d\n", sumofdigits(n));
    return 0;
}