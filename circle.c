#include<stdio.h>
int main(){
    float radius , area ;
    float pi = 3.14;
    printf("Enter the radius of a circle:\n");
    scanf("%f", &radius);
  
    area = pi * radius * radius;
    printf("area of circle is:%f\n",area);
    return 0;
}