#include <stdio.h>

int main(void) {
    float fahr, celsius;
    float lower = 0, upper = 300, step = 20;

    celsius = lower;
    printf("Celsius\t\tFahrenheit\n");
    printf("--------------------------\n");

    while (celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32;
        printf("%3.0f\t\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}
