#include<stdio.h>

void main() {
    printf("HELLO WORLD");

    int res = sum(1,2);
    printf(res,'%d');
    
}

int sum(int x, int y) {
    return x+y;
}