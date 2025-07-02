#include<stdio.h>
int main(){
    int n, i , max;
    printf("Enter the elements:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of array:%d\n",n);
    for(int i = 0 ; i < n ; i++){
    scanf("%d", &arr[i]);
    }
     max = arr[0];

    for(int i = 1; i < n ; i++){
        if(arr[i]> max){
            max = arr[i];
        }
    }
    printf("The largest number of array is:%d\n",max);
    return 0;
}