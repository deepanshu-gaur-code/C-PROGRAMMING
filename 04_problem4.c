#include <stdio.h>

int main(){
    int year;
    printf("Enter year: \n");
    scanf("%d", &year);

    if((year %4==0 && year%100!=0) || year %400==0){
        printf("This is a leap year");
    }
    else{
        printf("This is not a leap year");
    }
    return 0;
}
/*A year is a leap year if:

It is divisible by 4, AND
If it is divisible by 100, it is not a leap year, UNLESS
It is also divisible by 400.*/