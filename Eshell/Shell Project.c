#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t parent_pid = getppid();
    printf("The PID of the parent process is: %d\n", parent_pid);
    return 0;
}
