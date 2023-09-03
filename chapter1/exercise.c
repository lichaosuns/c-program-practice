#include <stdio.h>

int main() {
    char c;
    int count = 0;
    printf("%d", count);
    
    for (; (c = getchar()) != EOF; ) {
        if (c == '\t' || c == '\n' || c == '\b') {
            //printf("match %c", c);
            count++;
            printf("count++");
        }
    }
    printf("count: %d\n", count);
}