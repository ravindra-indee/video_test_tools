#include <stdio.h>

#define BUFFER_SIZE 1024  // Define the buffer size for reading chunks of data

int main() {
    unsigned char buffer[BUFFER_SIZE];  // Buffer to store binary data
    size_t bytesRead;

    // Read from stdin and write to stdout in binary mode
    while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, stdin)) > 0) {
        fwrite(buffer, 1, bytesRead, stdout);
    }

    return 0;
}
