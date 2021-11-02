#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define length 20

int main()
{
    int file = open("/dev/random", O_RDONLY);
    if (file < 0)
    {
        return -1;
    }
    else
    {
        char array[length + 1];
        int ans = read(file, array, length);
        if (ans < 0)
        {
            return -1;
        }
        else
        {
            printf("%s\n", array);
        }
    }
    close(file);
    return 0;
}