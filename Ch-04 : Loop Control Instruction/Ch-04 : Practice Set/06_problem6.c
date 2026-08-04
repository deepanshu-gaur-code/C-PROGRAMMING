#include <stdio.h>

int main() {

    // Using do while loop to calculate the sum of first 10 natural numbers

    // int i = 1;
    // int sum = 0;
    // do {
    //     sum += i;
    //     i++;
    // } while (i <= 10);
    // printf("The sum of first 10 natural numbers is %d\n", sum);

    // Using for loop to calculate the sum of first 10 natural numbers

    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        sum += i;
    }

    printf("The sum of first 10 natural numbers is %d\n", sum);

    return 0;
}