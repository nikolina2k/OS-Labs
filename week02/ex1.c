#include <stdio.h>
#include<float.h>
#include<limits.h>

int main () {

int a = INT_MAX;
float b = FLT_MAX;
double c = DBL_MAX;

printf("Integer = %d\n", a);
printf("Float = %f\n", b);
printf("Double = %lf\n", c);

printf("Sizeof integer = %d\nSizeof float = %d\nSizeof double = %d\n", sizeof a, sizeof b, sizeof c);
return 0;
}

