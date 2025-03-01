#include <stdio.h>

#define MAX_CHAR 1000
#define MAX_INPUT_LEN 80

int sv_getline(char line[], int max_char);

int main(void) {
    int len;
    char line[MAX_CHAR];

    while ((len = sv_getline(line, MAX_CHAR)) > 0) {
        if (len > MAX_INPUT_LEN) {
            printf("%s", line);
        }
    }
    return 0;
}

int sv_getline(char line[], int max_char) {
    int c, i;
    
    for (i = 0; i < max_char - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        line[i] = c;

    // If new line character is encountered, add it to the array of characters.
    if (c == '\n') {
      line[i] = c;
      i++;      
    }

    // Always add end of string at the end of the char array.
    line[i] = '\0';
    return i;
}
