#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(){
  struct stat info;
  const char name = '..\main.c';
  stat(name, &info);
  printf("%d\n", st.st_size);
  
  return 0;
}
