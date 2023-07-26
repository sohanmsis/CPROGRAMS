include <stdio.h>

float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float celsius_input, converted_temperature;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius_input);

    converted_temperature = celsius_to_fahrenheit(celsius_input);

    printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", celsius_input, converted_temperature);

    return 0;
}
