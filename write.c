#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void) {
  int fd;
  fd = open("sample.txt", O_RDWR);

  if(fd < 0){
    printf("Error: open(%d) %s\n", errno, strerror(errno));
    return(-1);
  }

  char *buf = "My ship is solid!";
  unsigned long word = 1720;
  size_t count;
  ssize_t nr;

  count = sizeof(word);
  nr = write(fd, &word, strlen(buf));

  if (nr == -1) {

  } else if (nr != count) {
    
  }

  return(0);
}
