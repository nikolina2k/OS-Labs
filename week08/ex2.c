#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/resource.h>
#include <string.h>
#include <time.h>


int main() {
    clock_t start = clock();
    while((clock() - start) / CLOCKS_PER_SEC <= 10) {
        void *trsh = malloc((size_t)1e7); //1e7 = 10MB
        memset(trsh, 0, (size_t)1e7);
        sleep(1);
    }
    //a memory leak happens, around 100MB of RAM is filled up and it can cause damage
    return 0;
}
