#include<stdio.h>
int main(){
    int arr[5];
    int sum = 0;
    printf("Enter the numbers:\n");

    for(int i = 0 ;i<5 ; i++){
        scanf("%d",&arr[i]);
        if(arr[i] % 2 == 0){
            sum += arr[i];
        }
    }
    printf("total of even numbers is:%d\n",sum);
    
    return 0;
}