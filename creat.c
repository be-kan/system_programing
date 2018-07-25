#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void)
{
  int fd;
  fd = creat("creat_sample_file.txt", 0644);
  if (fd == -1) {
    printf("Error: open(%d) %s\n", errno, strerror(errno));
    return(-1);
  }

  return(0);
}
