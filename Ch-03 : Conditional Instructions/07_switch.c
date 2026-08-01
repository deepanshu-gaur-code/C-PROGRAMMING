#include <stdio.h>

int main(){
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    switch(a){
        case 1:
        printf("You entered 1\n");
        break;
        // when we enter 1 all the cases below will also be executed because there is no break statement after case 1
        // for break you have to write break; after each case statement
        case 2:
        printf("You entered 2\n");
        break;
        case 3:
        printf("You entered 3\n");
        break;
        case 4:
        printf("You entered 4\n");
        break;
        default:
        printf("Nothing matched\n");

    }
    return 0;
}