#include<stdio.h>
int main(){
    int arr[2][2] = {
        {2 , 4} ,
        {3 , 9}
    };
    int *ptr = (int*)arr;

    printf("Elements of array using pointers are:\n");

    for(int i = 0; i < 9 ; i++){
        printf("%d\n",*ptr+i);
    }

    return 0;
}