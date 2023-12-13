#include "get_nex_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int fd;
    char *line;

    fd = open("test.txt", O_RDONLY);
    while (1)
    {
        line = get_next_line(fd);
        printf ("%s", line);
        if (line == NULL)
        {
            free(line);
            return (0);
        }
        free (line);
    }
}
