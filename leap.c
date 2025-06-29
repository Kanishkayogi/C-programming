#include<stdio.h>
int main(){
    int y;
    printf("Enter a year:\n");
    scanf("%d", &y);
    if(y % 400 == 0){
        printf("this is a leap year\n");
    } else {
        printf("This is not a leap year\n");
    }
    return 0;
}