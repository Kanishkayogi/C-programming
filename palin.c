#include<stdio.h>
int main(){
    char a[20];
     char b[20];
    int size = 0;
    printf("Enter a string:\n");
    scanf("%s",a);
    for(int i = 0 ; i !='\0'; i++){
        size++;
    }
    for(int i = size , j = 0; i >= 0 ; i--,j++ ){
        if(a[i] = b[j]){
            printf("%c", b[j]);
        }
        printf("this is palindrome%c\n",b[j]);
    }
    return 0;
}