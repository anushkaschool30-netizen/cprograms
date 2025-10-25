//WAPC to find the gender ratio based on the number of males and number of females entered as inputs.
#include <stdio.h>

int main()
 {
    int males;
    int females;
    double ratio;

    printf("Enter the number of males: ");
    scanf("%d", &males);

    printf("Enter the number of females: ");
    scanf("%d", &females);

    if (males > 0) {
        ratio = ((double)females / males) * 1000;
        printf("The gender ratio (females per 1000 males) is: %.2f\n", ratio);
    } else {
        printf("Cannot calculate gender ratio: Number of males cannot be zero.\n");
    }

    return 0;
}
