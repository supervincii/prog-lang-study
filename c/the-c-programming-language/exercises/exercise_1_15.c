#include <stdio.h>

float to_celsius(float fahr);

int main(void) {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit\tCelsius\n");
    printf("------------------------\n");
    while (fahr <= upper) {
        printf("%3.0f\t\t%6.1f\n", fahr, to_celsius(fahr));
        fahr = fahr + step;
    }
    return 0;
}

float to_celsius(float fahr) {
    float celsius;
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    return celsius;
}
