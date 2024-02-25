//Implement a program that prompts the user to input their birth year and calculates their age.
#include <stdio.h>
#include <time.h>

int main() {
    int birth_year, current_year, age;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    current_year = tm.tm_year + 1900;

    printf("Enter your birth year: ");
    scanf("%d", &birth_year);

    age = current_year - birth_year;
    printf("Your age is %d\n", age);

    return 0;
}
//2nd method
#include <stdio.h>
#include <time.h>

int main() {
    int birth_year, current_year, age;

    // Get the current year
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    current_year = tm.tm_year + 1900;

    // Prompt user to input their birth year
    printf("Enter your birth year: ");
    scanf("%d", &birth_year);

    // Calculate age
    age = current_year - birth_year;

    // Display the age
    printf("Your age is: %d\n", age);

    return 0;
}
