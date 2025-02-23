#include <stdio.h>

int main(void) {
    int c, blank = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++blank;
        }
        if (c != ' ') {
            if (blank >= 1) {
                putchar(' ');
                blank = 0;
            }
            putchar(c);
        }
    }

    return 0;
}
