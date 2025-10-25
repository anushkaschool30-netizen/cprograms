//WAPC to input an integer. Calculate and display the square and cube of the number.
#include <stdio.h>

int main() {
    int number;
    int square;
    int cube;

    printf("Enter an integer: ");
    scanf("%d", &number);
    square = number * number;
    cube = number * number * number;

    printf("The number entered is: %d\n", number);
    printf("The square of %d is: %d\n", number, square);
    printf("The cube of %d is: %d\n", number, cube);

    return 0;
}
