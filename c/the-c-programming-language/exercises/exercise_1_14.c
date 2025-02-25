#include <stdio.h>
#include <ctype.h>

#define LETTER_COUNT 26
#define NUMBER_COUNT 10

int main(void) {
    int c, letters[LETTER_COUNT] = {0}, numbers[NUMBER_COUNT] = {0};

    while ((c = getchar()) != EOF) {
        if (tolower(c) >= 'a' && tolower(c) <= 'z')
            letters[c - 'a']++;
        else if (c >= '0' && c <= '9')
            numbers[c - '0']++;
    }

    for (int i = 0; i < LETTER_COUNT; i++) {
        printf("%c: ", 'a' + i);
        for (int j = 1; j <= letters[i]; j++)
            printf("#");
        printf("\n");
    }

    for (int i = 0; i < NUMBER_COUNT; i++) {
        printf("%d: ", i);
        for (int j = 1; j <= numbers[i]; j++)
            printf("#");
        printf("\n");
    }

    return 0;
}
