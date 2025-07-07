#include<stdio.h>
int main(){
    int i , j , x= 97;
    for(int i = 0 ; i <= 3 ; i++){
        for(int j = 0 ; j <= i ; j++){
            printf(" %c ", x);
            x++;
        }
    
    printf("\n");
    }
    return 0;
}