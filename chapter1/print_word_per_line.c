#include <stdio.h>

#define OUT 0
#define IN  1

int main() {
    char c;
    int state = OUT;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t' || c == '\n' || c == ' ' ) 
        {
            putchar('\n');
        } else
        {
            putchar(c);    
        }
    }
    
}