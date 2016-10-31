#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>

void easySize(int size){
  printf("Size: ");
  if(size >= 1000000000){
    printf("%d.%d GB\n", size/1000000000, size%1000000000/1000000);
  }else{
    if(size >= 1000000){
      printf("%d.%d MB\n", size/1000000, size%1000000/1000);
    }else{
      if(size >= 1000){
	printf("%d.%d KB\n", size/1000, size%1000);
      }else{
	printf("%d B\n", size);
      }
    }
  }
}

void easyPermissions(int mode){
  printf("%d\n",mode);
}

int main(){
  //making stat
  struct stat info;
  stat("main.c", &info);

  //getting info (thanks Internet!)
  printf("Info for main.c:\n");
  easySize(info.st_size);
  printf("Mode: %o\n", info.st_mode);
  int try=info.st_mode;
  easyPermissions(try);
  printf("Access: %s\n", ctime(&info.st_atime));

  return 0;
}
