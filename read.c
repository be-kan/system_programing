#include <stdio.h>
#include <fcntl.h>

int main(void)
{
  int     fd;
  char    buff[100+1];
  int     rc;

  fd = open("sample.txt", O_RDONLY);
  if (fd == -1)
  {
    printf("ファイルオープンエラー\n");
    return(-1);
  }
  rc = read(fd, buff, 100);
  if (rc == -1)
  {
    printf("ファイル読み込みエラー\n");
  }
  else
  {
    buff[rc] = '\0';
    printf("read:%d - %s\n", rc, buff);
  }

  return(0);
}
