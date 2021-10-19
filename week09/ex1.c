#include<stdio.h>

int total, hit, miss, lowest, cur, max_bit = 31;

int main(int argc, char *argv[]) {
    int N = atoi(argv[1]);
    int memory[N], count[N];
    memset(memory, -1, sizeof(memory));
    memset(count, 0, sizeof(count));

    FILE *input = fopen("Lab 09 input.txt", "r");

    fscanf(input, "%d", &cur);

    while(!feof(input)) {
        lowest = 0;
        hit = 0;
        total++;
        for(int i=0;i<N;i++) {
            if (count[i] != -1) {
                count[i] /= 2;
            }
            if(memory[i]==cur) {
                count[i]|=(1<<(max_bit-1));
                hit = 1;
            }
            if(memory[i]==-1) {
                if (memory[lowest] != -1){
                    lowest=i;
                }
            }
            else if(count[i]<count[lowest]) {
                if (memory[lowest] != -1){
                    lowest=i;
                }
            }
        }
        int temp = cur;
        fscanf (input, "%d", &cur);
        if(hit)continue;
        ++miss;
        count[lowest]=(1<<(max_bit-1));
        memory[lowest]=temp;
    }

    printf("hits = %d misses = %d ratio = %f\n", total-miss, miss, (double)(total-miss)/(miss));

    fclose(input);
    return 0;
}
