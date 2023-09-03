#include <stdio.h>

#define INSIDE_WORD 1
#define OUTSIDE_WORD 0
int main() {
    
    int c_word = 0, c_new_line  = 0, c_char = 0;
    char c;
    int state = OUTSIDE_WORD;

    while ((c = getchar()) != EOF)
    {
        c_char++;
        if(c == '\n') {
            c_new_line++;
        }

        if(c == ' ' || c == '\t' || c == '\n') {
            state = OUTSIDE_WORD;
        } else if (state == OUTSIDE_WORD) {
            state = INSIDE_WORD;
            c_word++;
        }
        
    }
    printf("word:%d, new line:%d, char:%d\n", c_word, c_new_line, c_char);
}