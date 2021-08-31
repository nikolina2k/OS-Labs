#include <stdio.h>
#include<string.h>

int main () {

char a[256];

fgets(a, 256, stdin);

char b[256];

for(int i=0;i<strlen(a)-1;i++)
{
     b[i] = a[strlen(a)-i-2];
}

printf("Your sentence in reverse:\n");

for(int i=0;i<strlen(b);i++)
{
    printf("%c", b[i]);
}

printf("\n");
return 0;
}
