#include<stdio.h>
#include<string.h>
int main(){
char a[] = "Kanishka";
char b[10];
 char c[30];
 int i ,j;
int size = 0;
int t = 0;
printf("Enter a string:\n");
scanf("%s",&b[i]);

for(int i = 0; a[i] != '\0'; i++){
    c[i] = a[i];
    t++;
}
for(int i = 0, j = t ; b[i]!='\0' ; i++, j++){
    c[j] = b[i];
}
printf("final string is :%s\n",c);

return 0;
}