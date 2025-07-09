#include<stdio.h>
int main(){
    int a [3][3];
    int i ,j;
    int diag = 0, secdiag = 0;

    printf("Enter the elements:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0 ; j < 3 ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0; i < 3 ; i++){
            diag += a[i][j];
            secdiag += a[i][2 - i];
        }
    printf("sum of diag is :%d\n",diag);
    printf("the sum of secdiag is :%d\n",secdiag);
    return 0;
}