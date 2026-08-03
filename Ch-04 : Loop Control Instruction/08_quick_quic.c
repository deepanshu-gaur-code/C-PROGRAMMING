#include <stdio.h>

int main(){
    int n, i=1;
    scanf("%d" , &n);
    do{
        printf("%d\n", i);
        i++;
    } while(i <= n); // The loop will run as long as i is less than or equal to n
    return 0;
}