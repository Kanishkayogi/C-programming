#include<stdio.h>
#include<string.h>
    struct student{
        char name[20];
        int age;
        float marks;
    };
    int main(){
        struct student s1 , s2 , s3 ;
        strcpy(s1.name, "Emma");
        strcpy(s2.name, "Alice");
        strcpy(s3.name,"Ella");
        s1.age = 16;
        s2.age = 16;
        s3.age = 16;
        s1.marks = 85;
        s2.marks = 66;
        s3.marks = 99;
        printf("Name:%s\n %s\n %s\n",s1.name,s2.name, s3.name );
        printf("Age: %d\n %d\n %d\n", s1.age, s2.age , s3.age);
        printf("Marks:%f\n %f\n  %f\n", s1.marks , s2.marks , s3.marks);
        return 0;
}
