#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

size_t getSize(const char *file){
    struct stat info;
    stat(file, &info);
    return info.st_size;
}

int main(){
    printf("%lu bytes\n", getSize("main.c"));

    return 0;
}
