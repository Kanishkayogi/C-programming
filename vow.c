#include<stdio.h>
int main(){
    char x[10];
    int i;
    printf("Enter a string\n");
    scanf("%s",x);
    for(int i = 0 ; x[i] != '\0'; i++){
        if(x[i]== 'a'|| x[i]== 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u' || x[i] == 'A' || x[i] == 'E' || x[i] == 'I' || x[i] == 'O' 
             || x[i]  == 'U'){
           printf("%c", x[i]);
        }
    }
    return 0;
        }