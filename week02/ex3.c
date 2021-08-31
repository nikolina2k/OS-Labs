#include<stdio.h>
int main(int argc, char* argv[])
{
    int n;
    sscanf(argv[1],"%d",&n);
    for(int i=0;i<n;i++)
    {
        int stars = 2*(i+1)-1;
        int spaces = (2*n-stars-1)/2;
        for(int j=0;j<spaces;j++)
            printf(" ");
        for(int k=0;k<stars;k++)
            printf("*");
        printf("\n");
    }
    return 0;
}
