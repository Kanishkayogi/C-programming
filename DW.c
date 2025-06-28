#include<stdio.h>
#include<stdlib.h>
int main(){
    int result;
    float a, b, Total;
    do{
        printf("1.Addition\n");
        printf("2.Multiplication\n");
        printf("3. Exit\n");
        printf("enter the following function:");
        scanf("%d", &result);
    switch(result){
  case 1:
  printf("Enter the 2 numbers:");
  scanf("%f%f", &a , &b);
  Total = a + b;
  printf("Total = %f\n",Total);
  break;

    case 2:
    printf("Enter the two numbers:");
    scanf("%f%f", &a, &b);
    Total = a * b;
    printf("Total = %f\n",Total);
    break;

    case 3:
    printf("exit");
    break;
    
    default:
    printf("invalid");
    }
} while ( result != 3.);

    return 0;
}