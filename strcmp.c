#include<stdio.h>
int main(){
    char s1[50], s2[50];
    int i = 0 , count = 0;
    printf("Enter a string:\n");
    scanf("%s",s1);

    printf("Enter another string:\n");
    scanf("%s",s2);

    while(s1[i] != '\0' && s2[i] != '\0'){
        if(s1[i] != s2[i]){
        count = 1;
        break;
    }
    i++;
}
    if(s1[i] != s2[i])
    count = 1;
   
    if(count == 0)
    printf("Strings are equal\n");
    else
    printf("They are not equal\n");
    return 0;
}