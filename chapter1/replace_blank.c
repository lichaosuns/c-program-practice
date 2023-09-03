#include <stdio.h>

int main() {
    
    char c;
    char pre;

    while ((c = getchar()) != EOF)
    {
        if(c != ' ' || pre != ' ') {
            putchar(c);
        }
        pre = c;
    }
}