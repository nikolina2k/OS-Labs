#include <stdio.h>
#include <dirent.h>
#include <inttypes.h>

int main() {
    DIR *dirp = opendir("./tmp");
    struct dirent *dp;

    int8_t A[255];
    char *files[255];
    int i = 0;

    while ((dp = readdir(dirp)) != NULL) {
        A[i] = dp->d_ino;
        files[i++] = dp->d_name;
    }

    for (int j = 0; j < i; j++) {
        int f = 0;
        for (int k = j + 1; k < i; k++) {
            if (A[k] == A[j] && A[k] != -1) {
                if (f == 0) {
                    printf("Link found: %s, %s", files[j], files[k]);
                    f = 1;
                }
                else {
                    printf(", %s", files[k]);
                }
                A[k] = -1;
            }
        }
        if (f) {
            printf("\n");
        }
    }
    
    closedir(dirp);
    return 0;
}