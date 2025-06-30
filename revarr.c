#include<stdio.h>
int main(){
    int a[10];
    printf("Enter 10 inetgers:\n");
    for (int i = 0 ; i < 10 ; i++){
        scanf("%d", &a[i]);
    }

    printf("reversed array\n:");
    for(int i = 9 ; i >= 0 ; i--){
        printf("%d\n", a[i]);
    }
   return 0;
}