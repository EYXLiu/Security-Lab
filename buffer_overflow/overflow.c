#include <stdio.h>

#define SMALL_BUFFER 32
#define BIG_BUFFER 64

void secret() {
    printf("Entering secret function\n");
    system("/bin/sh");
}

int overflow() {
    char small_buffer[SMALL_BUFFER] = {0};
    int n = read(0, small_buffer, BIG_BUFFER);
    return n;
}

int main() {
    overflow();
    printf("Main\n");
    return 0;
}

