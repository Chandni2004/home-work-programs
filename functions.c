#include<stdio.h>
#include "header.h"
// 1. Even or Odd
void EvenOdd(int *n) {
    if (*n % 2 == 0)
        printf("%d is Even\n", *n);
    else
        printf("%d is Odd\n", *n);
}

// 2. Max of two numbers
void maxTwo(int *a, int *b) {
    printf("Max of %d and %d is %d\n", *a, *b, (*a > *b) ? *a : *b);
    return;
}

// 3. Max of three numbers
void maxThree(int *a, int *b, int *c) {
    int max = (*a > *b) ? ((*a > *c) ? *a : *c) : ((*b > *c) ? *b : *c);
    printf("Max of %d, %d, %d is %d\n", *a, *b, *c, max);
}

// 4. Max of four numbers
void maxFour(int *a, int *b, int *c, int *d) {
    int max = *a;
    if (*b > max) max = *b;
    if (*c > max) max = *c;
    if (*d > max) max = *d;
    printf("Max of %d, %d, %d, %d is %d\n", *a, *b, *c, *d, max);
}

// 5. Second max of three
void secondMaxThree(int *a, int *b, int *c) {
    int max, sec;
    if (*a > *b && *a > *c) {
        max = *a;
        sec = (*b > *c) ? *b : *c;
    } else if (*b > *c) {
        max = *b;
        sec = (*a > *c) ? *a : *c;
    } else {
        max = *c;
        sec = (*a > *b) ? *a : *b;
    }
    printf("Second max is %d\n", sec);
}

// 6. Leap year check
void LeapYear(int *year) {
    if ((*year % 4 == 0 && *year % 100 != 0) || *year % 400 == 0)
        printf("%d is a Leap Year\n", *year);
    else
        printf("%d is not a Leap Year\n", *year);
}

// 7. Magic number (Palindrome)
void MagicNumber(int *num) {
    int rev = 0, original = *num;
    while (original > 0) {
        rev = rev * 10 + original % 10;
        original /= 10;
    }
    if (rev == *num)
        printf("%d is a Magic Number (Palindrome)\n", *num);
    else
        printf("%d is not a Magic Number\n", *num);
}

// 8. Leap year with operators
void LeapLogical(int *year) {
    ((*year % 4 == 0 && *year % 100 != 0) || (*year % 400 == 0)) ?
        printf("%d is Leap Year (Logical)\n", *year) :
        printf("%d is not Leap Year (Logical)\n", *year);
}

// 9. Character classification
void classifyChar(char *ch) {
    int ascii = (int)(*ch);
    if (ascii >= 65 && ascii <= 90) {
        printf("Character %c is an Uppercase Letter.\n", *ch);
    }
    else if (ascii >= 97 && ascii <= 122) {
        printf("Character %c is a Lowercase Letter.\n", *ch);
    }
    else if (ascii >= 48 && ascii <= 57) {
        printf("Character %c is a Digit.\n", *ch);
    }
    else if ((ascii >= 32 && ascii <= 47) || 
             (ascii >= 58 && ascii <= 64) || 
             (ascii >= 91 && ascii <= 96) || 
             (ascii >= 123 && ascii <= 126)) {
        printf("Character %c is a Special Character.\n", *ch);
    }
}
