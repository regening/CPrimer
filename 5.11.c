#include <stdio.h>

#define MIN 60



int main(){
    /* 5.11 1*/

    int min;
    
    printf("Enter minutes (<=0 to quit): ");
    while (scanf("%d", &min) == 1 && min > 0) {
        printf("%d min = %d hours, %d min\n", min, min / MIN, min % MIN);
        printf("Enter next value (<=0 to quit): ");
    }
    printf("Done.\n");     
    




    return 0;
}