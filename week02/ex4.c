#include<stdio.h>

void swap(int *n, int *d) {

int c;
c = *n;
*n = *d;
*d = c;

}

int main () {

int first;
int second;

scanf("%d %d", &first, &second);
swap(&first, &second);

printf("%d %d /n", first, second);

}
