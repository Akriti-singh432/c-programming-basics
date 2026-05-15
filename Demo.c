#include <stdio.h>

int main() {
    float length, breadth, radius;
    float rect_area, rect_perimeter;
    float circle_area, circle_circumference;

    // Input
    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    // Rectangle calculations
    rect_area = length * breadth;
    rect_perimeter = 2 * (length + breadth);

    // Circle calculations
    circle_area = 3.14 * radius * radius;
    circle_circumference = 2 * 3.14 * radius;

    // Output
    printf("\nRectangle Area = %.2f", rect_area);
    printf("\nRectangle Perimeter = %.2f", rect_perimeter);

    printf("\nCircle Area = %.2f", circle_area);
    printf("\nCircle Circumference = %.2f\n", circle_circumference);

    return 0;
}