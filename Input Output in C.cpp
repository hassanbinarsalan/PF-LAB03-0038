#include <stdio.h>

int main() {
    char city[50], country[50], grade[10];
    int population;
    float area;

    printf("Enter your city: ");
    scanf("%s", city);

    printf("Enter your country: ");
    scanf("%s", country);

    printf("Enter population: ");
    scanf("%d", &population);

    printf("Enter area: ");
    scanf("%f", &area);

    printf("Enter grade: ");
    scanf(" %s", grade);

    printf("\nYou live in %s, %s.\n", city, country);
    printf("Population: %d\n", population);
    printf("Area: %.2f\n", area);
    printf("Grade: %s\n", grade);

    return 0;
}
