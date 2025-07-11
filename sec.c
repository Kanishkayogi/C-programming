#include<stdio.h>
int main(){
    int arr[] = {23 , 34 , 12, 45, 67};
    int n = 5;
    int frst = arr[0] , second = -1, i;
    for(int i = 1 ; i < n ; i++){
        if(arr[i] > frst){
            second = frst;
            frst = arr[i];
        } else if (arr[i] > second && arr[i] != frst)
        second = arr[i];
    }
    printf("second largest:%d\n",second);
    return 0;
}