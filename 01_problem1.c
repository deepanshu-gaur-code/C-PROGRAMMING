#include <stdio.h>

int main(){
    int a = 10;
    if (a = 11)
         printf("I am 11");
    else
         printf("I am not 11");
    return 0;
}
// it gives output as a I am 11 because the condition in the if statement is using the assignment operator '=' instead of the equality operator '=='. This means that 'a' is being assigned the value 11, which evaluates to true, so the first printf statement is executed. To fix this, you should use '==' for comparison: