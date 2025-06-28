#include<stdio.h>
int main(){
    char a[20] , b[20];
    int size=0;
   printf("enter a  string\n:");
    
        
        scanf("%s", a);
    for(int i = 0 ; a[i]!='\0' ; i++){   
        size++;
   }
    for(int i=size,j=0  ; i>=0  ; i--,j++){
        b[j] = a[i];
        printf(" %c",b[j]);
    }
    
    printf("\n");
    
    return 0;
}