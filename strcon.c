#include<stdio.h>
int main(){
    char a[10] = "hello";
    char b[10] = "kanishka";
    char c[20];
    int size = 0;

    for(int i = 0 ; a[i] != '\0'; i++){
        c[i] = a[i];
        size++;
    }

    for(int i = 0, j = size ; b[i] != '\0' ; i++,j++){
        c[j] = b[i];
    }
    
    printf("%s\n",c);
    return 0;
}