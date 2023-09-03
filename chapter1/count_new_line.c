#include <stdio.h>

int main() {
    char c;
    int count;
    
    for(; (c = getchar()) != EOF;) {
        if (c == '\n') {
            count++;
        }
    }

    printf("new line: %d\n", count);
}