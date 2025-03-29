#include <stdio.h>
#include <stdlib.h>

int main() {

    int r, x = 5, y = 3;

    r = (x > 2) && (y < x);
    printf("resultado: %d\n",r);

    r = (x%2==0) && (y > 0);
    printf("resultado: %d\n",r);

    r = (x > 2) || (y > x);
    printf("resultado: %d\n",r);

}