#include<stdio.h>
int main(){
    int i , j , a = 97;
    for (int i = 0 ; i <= 3; i++){
        for(int j = 3 ; j >= i; j-- ){
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}