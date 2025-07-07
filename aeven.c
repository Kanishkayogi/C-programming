#include<stdio.h>
int main(){
    int i,sum,num;
    float avg;
    int arr[5];

    printf("enter five even numbers\n");
    for(int i=0;i<5; i++){
        scanf("%d",&arr[i]);
        }
        for(i=0;i<5; i++){
        if(arr[i] % 2 == 0){
          sum += arr[i];
          num++;
        }
      }
        if(num > 0){
          avg = (float)sum /num;
      printf("average : %f\n",avg);  
        } else{
          printf("no even numbers present\n");
        }
         return 0;
      }