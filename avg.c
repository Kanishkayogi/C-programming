#include<stdio.h>
int main(){
    int x[5];
    int sum = 0;
    int avg, i;

    printf("enter the elements:\n");
    for(int i = 0; i < 5 ; i++){
    scanf("%d",&x[i]);
    }
    for(int i = 0 ; i < 5; i++){
        sum += x[i];
    }
    avg = sum / 5;
    printf("the average of an array is :%d\n",avg);
    return 0;
}