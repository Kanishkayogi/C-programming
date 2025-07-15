#include<stdio.h>
int main(){
    char s1[500] ,res[500];
    int i,j = 0 ;
   printf("Enter a string:\n");
   fgets(s1 , sizeof(s1), stdin);

   for(int i = 0 ; s1[i] != '\0'; i++){
    if(s1[i] != ' ')
    res[j++] = s1[i];
   }
   res[j] = '\0';

   printf("without spaces:%s\n", res);
    return 0;
}