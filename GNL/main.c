#include "get_next_line.h"

int main() {
    int fd;
    char *line;

    fd = open("test.txt", O_RDONLY); // Replace "example.txt" with your file

    if (fd == -1) {
        printf("Error opening the file.\n");
        return 1;
    }

    int i;
    i = 0;
    while (i < 5) 
    {
        line = get_next_line(fd);
        printf("%s", line);
        i++;
        free(line);
    }

    close(fd);
    return 0;
}
