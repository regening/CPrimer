#include <stdio.h>

//2    #define MIN 60
/* 5.11 4 
#define PER_CM 0.3937
#define PER_FOOT 12    */
/* 5.11 7 
void print(double num);*/
/* 5.11 9 
void Tem(double fah);*/

int main(){

/* 5.11 1
    int min;
    
    printf("Enter minutes (<=0 to quit): ");
    while (scanf("%d", &min) == 1 && min > 0) {
        printf("%d min = %d hours, %d min\n", min, min / MIN, min % MIN);
        printf("Enter next value (<=0 to quit): ");
    }
    printf("Done.\n");     */
/* 5.11 2 
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    for (int i = num; i <= num + 10; i++) {
        printf("%d ", i);
    }
    printf("\n");   */
/* 5.11 3 
    int days;
    
    printf("Enter days (<=0 to quit): ");
    while (scanf("%d", &days) == 1 && days > 0) {
        printf("%d days are %d weeks, %d days.\n", 
               days, days / 7, days % 7);
        printf("Enter next value (<=0 to quit): ");
    }   */
/* 5.11 4 
    double cm;
    
    printf("Enter a height in centimeters: ");
    while (scanf("%lf", &cm) == 1 && cm > 0) {
        double inches = cm * PER_CM;
        int feet = inches / PER_FOOT;
        double re = inches - feet * PER_FOOT;
        
        printf("%.1f cm = %d feet, %.1f inches\n", 
               cm, feet, re);
        printf("Enter a height in centimeters (<=0 to quit): ");
    }
    printf("bye\n");    */
/* 5.11 5 
    int days;
    long total = 0;
    
    printf("Enter number of days: ");
    scanf("%d", &days);
    
    for (int i = 1; i <= days; i++) {
        total += i;
    }
    
    printf("Total earnings after %d days: $%ld\n", days, total);    */
/* 5.11 6 
    int days;
    long total = 0;
    
    printf("Enter number of days: ");
    scanf("%d", &days);
    
    for (int i = 1; i <= days; i++) {
        total += i * i;
    }
    
    printf("Total squared earnings after %d days: $%ld\n", days, total);    */
/* 5.11 7 
    double num;
    
    printf("Enter a double number: ");
    scanf("%lf", &num);
    
    print(num);    */
/* 5.11 8 
    int oper2, oper1;
    
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &oper2);
    
    printf("Now enter the first operand: ");
    while (scanf("%d", &oper1) == 1 && oper1 > 0) {
        printf("%d %% %d is %d\n", oper1, oper2, oper1 % oper2);
        printf("Enter next number for first operand (<= 0 to quit): ");
    }
    printf("Done\n");   */
/* 5.11 9 
    double fahr;
    
    printf("Enter a temperature in Fahrenheit: ");
    while (scanf("%lf", &fahr) == 1) {
        Temp(fahr);
        printf("Enter next temperature (q to quit): ");
    }
    printf("Done.\n");  */

    return 0;
}

/* 5.11 7
void print(double num) {
    printf("The cube of %.2f is %.2f\n", num, num * num * num);
}   */
/* 5.11 9 goi
void Tem(double fah) {
    const double celsius = 5.0 / 9.0 * (fah - 32.0);
    const double kelvin = celsius + 273.16;
    
    printf("Fahrenheit: %.2f\n", fah);
    printf("Celsius: %.2f\n", celsius);
    printf("Kelvin: %.2f\n", kelvin);*/