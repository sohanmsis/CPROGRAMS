#include <stdio.h>
#include <assert.h>

#define PI 3.14159

double calculate_area(double radius) {
    assert(radius >= 0); 
    return PI * radius * radius;
}

int main() {
    double radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = calculate_area(radius);

    printf("Area of the circle with radius %.2lf is: %.2lf\n", radius, area);

    return 0;
}
