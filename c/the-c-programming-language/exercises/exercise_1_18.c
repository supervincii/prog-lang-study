#include <stdio.h>

#define MAX_LEN 1000

int sv_getline(char line[], int max_char);
void remove_blanks(char line[], int max_char);

int main(void) {
    int len;
    char line[MAX_LEN];

    while ((len = sv_getline(line, MAX_LEN)) > 0) {
        remove_blanks(line, len);
        printf("%s", line);
    }

    return 0;
}

int sv_getline(char line[], int max_char) {
    int i, c;

    for (i = 0; i < max_char - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        line[i] = c;

    if (c == '\n') {
      line[i] = c;
      i++;      
    }

    line[i] = '\0';
    return i;
}

void remove_blanks(char line[], int len) {
    int i, c;

    for (i = len - 2; line[i] == ' ' || line[i] == '\t'; --i)
        ;
    
    line[i + 1] = '\n';
    line[i + 2] = '\0';
}
