#include<stdio.h>
int main(){
    char str[50];
    int count = 0;
     int a = 0;
     printf("Enter a string:\n");
     fgets(str , sizeof(str) , stdin);

     while(str[a] != '\0'){
        if(str[a] == ' ')
        count++;
        a++;
     }
     printf("spaces in string:%d\n",count);
     return 0;
}