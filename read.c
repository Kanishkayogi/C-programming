#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<errno.h>
#include<fcntl.h>
#include<string.h>
int main(int argc , char * argv[]){
    char buffer[100];
    int fd = open("input.txt", O_RDONLY);

    if(fd < 0){
        perror("ErrNo:opening file failed");
        fprintf(stderr, "ErrNull:%s\n", strerror(errno));
        return 1;
    }

    int bytes = read(fd , buffer , sizeof(buffer) - 1);
    if(bytes < 0){
        perror("ErrNo:Reading files failed");
        fprintf(stderr, "ErrNull:%s\n",strerror(errno));
        close(fd);
        return 1;
    }
    buffer[bytes] = '\0';
    printf("File content:%s\n", buffer);

    close(fd);
    return 0;
} 