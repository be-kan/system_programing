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
    fd = open("sample.txt", O_RDONLY);
    if(fd < 0){
        printf("Error: open(%d) %s\n", errno, strerror(errno));
        return(-1);
    }

    return(0);
}
