#include <stdio.h>

int main() {
    float radius = 6.5f;
    double pi = 3.14159265359;
    char sphere = 'S';

    float area = 4 * pi * radius * radius;
    float volume = (4.0f / 3.0f) * pi * radius * radius * radius;

    printf("The radius of Sphere %c is %.2f\n", sphere, radius);
    printf("The volume of Sphere %c is %.2f\n", sphere, volume);
    printf("The area of Sphere %c is %.2f\n", sphere, area);

    return 0;
}