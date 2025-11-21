#include <stdio.h>
#include<stdlib.h>

int main() {
    int *rakshi=(int*)malloc(5*sizeof(int));
    *rakshi=10;{
    printf("%d",rakshi);
}
}
