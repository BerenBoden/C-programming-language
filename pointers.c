#include <stdio.h>

int x = 4;
int *pX = &x;

int main(){
    printf("Address: %p, Value: %d\n", pX, x);
    return 0;
}