#include<stdio.h>
#include<stdbool.h>
int main(){
    char command[50];
    while(true){
        fgets(command, 50, stdin);
        system(command);
    }
    return 0;
}