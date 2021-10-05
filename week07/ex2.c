#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Enter number of integers:");
    scanf("%d", &n);
    int *array = (int*)calloc(n, sizeof(int));
    printf("array[%d] = %d\n", 0, 0);
    for(int i = 1; i < n; ++i) {
        array[i] = array[i - 1] + 1;
        printf("array[%d] = %d\n", i, array[i]);
    }
    free(array);
}

