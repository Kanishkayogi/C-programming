#include<stdio.h>
#include<string.h>
int main(){
    char c[10]= "Hello";

    for(int i = 0; c[i]!='\0'; i++){
        printf("%c\n", c[i]);

    }
    return 0; 
}