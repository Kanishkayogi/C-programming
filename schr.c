#include<stdio.h>
int main(){
    char str[] = "Hello";
    char *ptr = str;
    printf("A character string is:\n");

    while (*ptr != '\0'){
        printf("%c\n", *ptr);
        ptr++;
    }
    return 0;
}