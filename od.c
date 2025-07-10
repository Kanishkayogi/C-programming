#include<stdio.h>
int main(){
    int arr[10], *ptr;
    int i;
printf("Enter 10 integers:\n");
for(i = 0 ; i < 10 ; i++){
    scanf("%d", &arr[i]);
}
ptr = arr;

printf("Odd elements are:\n");
for(int i = 0 ; i < 10 ; i++){
    if(*(ptr + i) % 2 != 0)
    printf("%d", *(ptr+i));
}
printf("\n");
return 0;
}