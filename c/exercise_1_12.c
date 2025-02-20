#include <stdio.h>

int main(void) {
    int c, prev_c;

    prev_c = EOF;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (prev_c != ' ' && prev_c != '\t' && prev_c != '\n') {
                // To avoid multiple new lines by having multiple whitespaces,
                // tab characters, or other new line characters, we only output
                // the new line character if the previous character is not a
                // space, tab character, or another new line character.
                putchar('\n');                
            }
        }
        else
            putchar(c);

        prev_c = c;
    }

    return 0;
}
