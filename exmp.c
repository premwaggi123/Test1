# include <stdio.h>
# include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        // Child process
        execlp("/bin/ls", "ls","-l", NULL);
        printf("Hello World\n");
    } else {
        // Parent process
        wait(NULL);
    }
    return 0;
}
