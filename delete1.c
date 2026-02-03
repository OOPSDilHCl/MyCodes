#include <stdio.h>
#include <unistd.h>
int main() {
    for (int i = 0; i <= 100; i++) {
        printf("\rLoading: %d%%", i);
        fflush(stdout);
        usleep(50000);  // Sleep for 50ms
    }
    printf("\nDone!\n");
    return 0;
}