#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>

int main(){
    //making stat
    struct stat info;
    stat("main.c", &info);

    //getting info (thanks Internet!)
    printf("Info for main.c:\n");
    printf("Size: %lu bytes\n", info.st_size);
    printf("Mode: %o\n", info.st_mode);
    printf("Access: %s\n", ctime(&info.st_atime));

    return 0;
}
