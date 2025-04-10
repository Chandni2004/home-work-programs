#include <stdio.h>
#include "header.h"

int main() {
    int a, b, c, d;
    int year;
    int num;
    char ch;

    // 1. Even or Odd
    printf("Enter a number to check Even/Odd: ");
    scanf("%d", &a);
    EvenOdd(&a);

    // 2. Max of two numbers
    printf("Enter two numbers to find maximum: ");
    scanf("%d%d", &a, &b);
    maxTwo(&a, &b);

    // 3. Max of three numbers
    printf("Enter three numbers to find maximum: ");
    scanf("%d%d%d", &a, &b, &c);
    maxThree(&a, &b, &c);

    // 4. Max of four numbers
    printf("Enter four numbers to find maximum: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    maxFour(&a, &b, &c, &d);

    // 5. Second max of three numbers
    printf("Enter three numbers to find second maximum: ");
    scanf("%d%d%d", &a, &b, &c);
    secondMaxThree(&a, &b, &c);

    // 6. Leap year check
    printf("Enter a year to check if it's a leap year: ");
    scanf("%d", &year);
    LeapYear(&year);

    // 7. Magic number check (Palindrome)
    printf("Enter a 3-digit number to check if it's a magic number (Palindrome): ");
    scanf("%d", &num);
    MagicNumber(&num);

    // 8. Leap year using logical operators
    printf("Enter a year again for logical operator check: ");
    scanf("%d", &year);
    LeapLogical(&year);

    // 9. Character classification
    printf("Enter a character to classify: ");
    scanf(" %c", &ch); // space before %c to skip previous newline
    classifyChar(&ch);
    return 0;
}
