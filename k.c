#include<stdio.h>
int main(){
    
  int  arr[] ={2,3,6,2,4,1,0,2,4,0};
    int y = sizeof(arr)/sizeof(arr[0]) ;
  int result[100];  
 int x = 0;
for(int i = 0; i < y; i++){
  int counter = 0;
  for(int j = 0 ; j < x ; j++){
    if (arr[i]== result[j]){
      counter = 1;
      break;
    }
  }
  if(counter == 0){
    result[x] = arr[i];
     x++;
  }

}   
printf("Arrays after deleting duplicate value:\n");
for(int i = 0 ; i < x ; i++){
  printf("%d", result[i]);
}
 printf(" \n ");   
return 0;

}
//[2,3,6,2,4,1,0,2,4,0]


//[2,3,6,4,1,0]


