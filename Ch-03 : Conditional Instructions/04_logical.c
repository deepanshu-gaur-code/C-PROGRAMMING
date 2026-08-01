#include <stdio.h>

int main(){
    int a=1; int b=0;
    printf("The value of a and b is %d\n", a&&b);
    printf ("The value of a or b is %d\n", a||b);
    printf ("The value of not a is %d\n", !a);
    // har kr jitne wale ko bazigar khte h or jo true ko false or flse ko true bna de uskp NOT operator khte h
    
    if (a && b){
        printf("both are true\n");
    }
    // is same as writing....
    if(a){
        if(b){
            printf("both are true\n");
        }
    }
    return 0;
}
