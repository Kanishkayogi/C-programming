#include<stdio.h>
int main(){
    int x[3][3], y[3][3] , z[3][3];

    printf("Enter the elements of x:\n");
    for(int i = 0 ; i < 3 ; i++){
        for (int j = 0 ; j < 3 ; j++){
            scanf("%d",&x[i][j]);
        }
    }
    printf("Enter the elements of y:\n");
    for (int i = 0; i < 3 ; i++){
        for (int j = 0 ; j < 3 ; j++){
            scanf("%d", &y[i][j]);
        }
    }
      for(int i = 0; i < 3 ; i++){
        for (int j = 0; j<3 ; j++){
            z[i][j] = x[i][j] * y[i][j];
        }
      }
    
      printf("Final matrix:\n");
      for(int i = 0 ; i < 3 ; i++){
        for(int j = 0; j < 3 ; j++){
            printf("%d", z[i][j]);
        }
        printf("\n");
      } 
    return 0;
}