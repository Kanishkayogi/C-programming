#include<stdio.h>
int main(){
    float radius , height , surfacearea;
    printf("Enter the radius of a cylinder:\n");
    scanf("%f", &radius);

    printf("Enter the height of a cylinder:\n");
    scanf("%f",&height);

    surfacearea = 2 * 3.14 * radius * (radius +height);
    printf("area of cylinder = %f", surfacearea );
    return 0;
}