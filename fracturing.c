#include <stdio.h>
#include <math.h>
double calculateWidth(double x1, double x2);
double calculateHeight(double y1, double y2);
double calculateDistance(double x1, double y1, double x2, double y2);
double calculateArea(double width, double height);
double calculatePerimeter(double width, double height);
int main() {
    double x1 = 1.0, y1 = 2.0, x2 = 4.0, y2 = 6.0;
    double width = calculateWidth(x1, x2);
    double height = calculateHeight(y1, y2);
    double distance = calculateDistance(x1, y1, x2, y2);
    double area = calculateArea(width, height);
    double perimeter = calculatePerimeter(width, height);
    printf("Width: %.2f\n", width);
    printf("Height: %.2f\n", height);
    printf("Distance: %.2f\n", distance);
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);
    return 0;
}
double calculateWidth(double x1, double x2) {
    return x2 - x1;
}
double calculateHeight(double y1, double y2) {
    return y2 - y1;
}
double calculateDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
double calculateArea(double width, double height) {
    return width * height;
}
double calculatePerimeter(double width, double height) {
    return 2 * (width + height);
}