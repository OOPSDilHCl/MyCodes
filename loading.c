#include <stdio.h>
#include <unistd.h>

int main() {
    int i;

    for (i = 0; i <= 1000; i++) {
        printf("\rLoading... %d%%", i);
        fflush(stdout);
        usleep(10000);   // 10 milliseconds
    }

    printf("\nCompleted!\n");
    return 0;
}