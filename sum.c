#include<stdio.h>
int main(){
    int arr[]={12 ,14, 6 , 4, 8};
    int sum = 0;
    int array = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0 ; i < 5; i++){
        sum += arr[i];
    }
    printf("The sum of array is: %d\n", sum);

    return 0;
}
