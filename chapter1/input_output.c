#include <stdio.h>

int main() {
    char c = getchar();

    printf("intput char %c\n", c);

    int result = putchar(c);
    putchar('\n');
    printf("result:%c\n", result);

    
    int input;

    while ((input = getchar()) != EOF)
    {
        putchar(input);
    }

    printf("EOF:%d\n", EOF);

    int count;

    while (getchar() != EOF)
    {
        count++;
    }

    printf("count %d\n", count);
    
}