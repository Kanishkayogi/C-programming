#include<stdio.h>
int main(){
    float side , area;
    printf("Enter the side of a square:\n");
    scanf("%f", &side);

    area = side * side;
    printf("area of square : %f\n", area);
    return 0;
}