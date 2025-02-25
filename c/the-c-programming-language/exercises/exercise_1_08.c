// A program that counts blanks, tabs, and new line characters.

#include <stdio.h>

int main(void) {
    int c, blanks = 0, tabs = 0, nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++tabs;
        else if (c == ' ')
            ++blanks;
    }

    printf("Blanks: %d\n", blanks);
    printf("Tabs: %d\n", tabs);
    printf("New lines: %d\n", nl);

    return 0;
}

// NOTE: In the terminal, EOF on UNIX devices is CTRL+D. So in this exercise,
// pressing the newline character <ENTER> will not end the program. It will only
// increment the value of `nl`. To end the program, input CTRL+D (the EOF char).
