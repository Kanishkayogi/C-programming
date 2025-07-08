#include<stdio.h>
int main(){
    int arr[5];

    printf("Enter 5 integers:\n");
    for(int i = 0 ; i <= 5; i++){
        scanf("%d",&arr[i]);
    }
    printf("Square of elements:\n");
    for(int i = 0 ; i<= 5; i++){
        printf("%d\n", arr[i] * arr[i]);
    }
    return 0;
}