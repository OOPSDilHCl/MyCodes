#include <stdio.h>
#include <unistd.h>

int main() {
    int i;

    for (i = 0; i <= 1000; i++) {
        printf("\rLoading... %d%%", i);
        fflush(stdout);
        usleep(50000);   // 50 milliseconds
    }

    printf("\nCompleted!\n");
    return 0;
}