#include<stdio.h>
int main(){
    char a[20];
    int size = 0;
    int i ,j,t=0;
    printf("Enter a string:\n");
    scanf("%s",a);
    printf("\nyour string is : %s\n",a);
    for(int i = 0 ; a[i]!='\0'; i++){
        size++;
    }
    
    for(int i = size-1,j = 0 ; j<=i  ; i--,j++ ){
         if(a[j] != a[i]){
            t=1;
    }

        } 
        if(t==0){
          printf("this is palindrome.\n"); 
        } else {
            printf("This is not a palindrome.\n");
        } 
    return 0;
}