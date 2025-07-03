#include<stdio.h>
#include<stdbool.h>
int main(){
    int input;
    bool ispassed = true;
    bool isnotpassed = false;
    printf("Enter the result:\n");
    scanf("%d",&input);
    
    ispassed = (input == 1);
    isnotpassed =(input == 0);
    if(input == 1){
        printf("You passed the exam.\n");
    } else if (input == 0) {
        printf("You failed.\n");
    } else {
        printf("Invalid input\n");
    }
    return 0;
}