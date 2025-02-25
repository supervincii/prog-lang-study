#include <stdio.h>
#define MAXLINE 15

int sv_getline(char line[], int maxline);
void copy(char to[], char from[]);

int main(void) {
    int len, max, max_length;
    char line[MAXLINE], longest[MAXLINE];

    max_length = 0;
    while ((len = sv_getline(line, MAXLINE)) > 0) {
        if (max_length < len) {
            max_length = len;
            copy(longest, line);
        }
        printf("Length of the line: %d\n", len);
    }

    if (max_length > 0)
        printf("%s", longest);
    return 0;
}

int sv_getline(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
