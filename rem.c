#include<stdio.h>
 int main(){
    char s1[50] , s2[50];
    printf("Enter a string:\n");
    fgets(s1, sizeof(s1) , stdin);
    int i , j =0 ;
    //printf("Enter a string:\n");
    for(int i = 0 ; s1[i] != '\0' ; i++){
        if(i == 0 || s1[i] != s1[i-1])
        s2[j++] = s1[i];
    }
    s2[j] = '\0';
    printf("Result: %s", s2);
    return 0;
 }