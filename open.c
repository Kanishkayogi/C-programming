#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<errno.h>

int main(){
    int fd = open("Input.txt", O_RDONLY);

    if(fd < 0){
        perror("Error opening file");
    } else {
        printf("File opened successfully\n");
    }

    return 0;
}