#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    char *args[3];
    args[0] = "echo";
    args[1] = "hello";
    args[2] = 0;
    execv("/bin/echo", args);
    printf("exec error\n");
}