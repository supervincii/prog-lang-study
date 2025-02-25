#include <stdio.h>

int main(void) {
    int wcount[10] = {0}, wcount_above_ten = 0;
    int lcount = 0, c;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (lcount <= 10) {
                ++wcount[lcount - 1];
                lcount = 0;
            }
            else {
                ++wcount_above_ten;
            }

        }
        else
            ++lcount;
    }

    for (int i = 0; i < 10; i++) {
        printf("%3d: ", i + 1);
        for (int j = 1; j <= wcount[i]; j++)
            printf("#");
        printf("\n");
    }
    printf("+10: ");
    for (int i = 1; i <= wcount_above_ten; i++)
        printf("#");
    printf("\n");

    return 0;
}
