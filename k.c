#include<stdio.h>
int main(){
    
  int  arr[] ={2,3,6,2,4,1,0,2,4,0};
    int y = sizeof(arr) / sizeof (arr[0]) ;
  int result[10];  
 int x = 0;
 //printf("size :%d",y); 
for(int i = 0; i < y; i++){
  int count = 0;
  for(int j = 0 ; j < x ; j++){
    if (arr[i]== result[j]){
      count = 1;
      break;
    }
  }
  if(count == 0){
    result[x] = arr[i];
     x++;
  }

}   
printf("Arrays after deleting duplicate value:\n");
for(int i = 0 ; i < x ; i++){
  printf("%d\n", result[i]);
  }
return 0;

}
//[2,3,6,2,4,1,0,2,4,0]


//[2,3,6,4,1,0]


