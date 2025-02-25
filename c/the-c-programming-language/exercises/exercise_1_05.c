#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(void) {
    int fahr;

    printf("Fahrenheit\tCelsius\n");
    printf("------------------------\n");
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
        float celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3d\t\t%6.1f\n", fahr, celsius);
    }

    return 0;
}
