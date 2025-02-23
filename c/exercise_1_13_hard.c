#include <stdio.h>

int main(void) {
    int wcount[10] = {0}, wcount_above_ten = 0;
    int largest_count_idx = 0;
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

    // get the index with the greatest count of words
    for (int i = 0; i < 10; i++) {
        if (wcount[i] > wcount[largest_count_idx]) {
            largest_count_idx = i;
        }
    }

    // the wcount of largest_count_idx will be the max height of the histogram
    int curr_row = wcount[largest_count_idx];
    for (int i = curr_row; i > 0; i--) {
        for (int j = 0; j < 10; j++) {
            if (wcount[j] == i) {
                wcount[j]--;
                printf("#\t");
            }
            else
                printf(" \t");
        }

        if (wcount_above_ten == i) {
            wcount_above_ten--;
            printf("#");
        }
        printf("\n");
    }

    for (int i = 0; i < 10; i++)
        printf("%d\t", i + 1);
    printf("10+\n");

    return 0;
}
