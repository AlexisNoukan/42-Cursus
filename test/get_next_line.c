#include "get_next_line.h"
/*
char *get_next_line(int fd);

int main() {
    // Example usage
    int file_descriptor; // Initialize this with your file descriptor
    char *line;

    while ((line = get_next_line(file_descriptor)) != NULL) {
        // Do something with the line read, e.g., print it
        write(1, line, strlen(line));
        free(line); // Free memory allocated by get_next_line
    }

    close(file_descriptor); // Don't forget to close the file descriptor
    return 0;
}
*/
char *get_next_line(int fd) {
    static char buffer[BUFFER_SIZE + 1]; // Static buffer to store read characters
    static int pos = 0; // Position tracker within the buffer
    static int bytes_read = 0; // Number of bytes read into the buffer
    char *line;
    int line_len = 0;
    int i = pos;

    while (1) {
        if (pos >= bytes_read) {
            bytes_read = read(fd, buffer, BUFFER_SIZE);
            if (bytes_read == 0) {
                if (line_len > 0) { // Return last line, if any
                    line = (char *)malloc((line_len + 1) * sizeof(char));
                    strncpy(line, &buffer[i], line_len);
                    line[line_len] = '\0';
                    pos = bytes_read;
                    return line;
                }
                return NULL; // End of file
            }
            pos = 0; // Reset position to read from the start of the buffer
            i = 0;
        }

        if (buffer[pos] == '\n') {
            line = (char *)malloc((line_len + 1) * sizeof(char));
            strncpy(line, &buffer[i], line_len);
            line[line_len] = '\0';
            pos++;
            return line;
        }

        line_len++;
        pos++;
    }
}
