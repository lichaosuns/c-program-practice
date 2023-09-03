#include <stdio.h>

int main() {

    printf("%d\n", '\n');
    double count = 0;
    for(; getchar() != EOF; count++);
    printf("count %.0f\n", count);
}