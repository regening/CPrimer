#include <stdio.h>
#include <string.h>

/* 9 
double cal(double a, double b);*/
// 18 #define DU 150

int mian(){

/* 1 
    char le[26];
    
    for (int i = 0; i < 26; i++) {
        le[i] = 'a' + i;
    }
    
    for (int i = 0; i < 26; i++) {
        printf("%c ", le[i]);
    }
    printf("\n");   */
/* 2 
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("$");
        }
        printf("\n");
    }   */
/* 3 
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", 'F' - j);
        }
        printf("\n");
    }   */
/* 4 
    char current = 'A';
    
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", current++);
        }
        printf("\n");
    }   */
/* 5 
    char ch;
    printf("Enter an uppercase letter: ");
    scanf("%c", &ch);
    
    int rows = ch - 'A' + 1;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        
        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }
        
        for (int j = i - 1; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        
        printf("\n");
    }   */
/* 6 
    int lower, upper;
    
    printf("Enter lower and upper limits: ");
    scanf("%d %d", &lower, &upper);
    
    printf("Number  Square  Cube\n");
    for (int i = lower; i <= upper; i++) {
        printf("%6d  %6d  %4d\n", i, i * i, i * i * i);
    }   */
/* 7 
    char word[100];
    
    printf("Enter a word: ");
    scanf("%s", word);
    
    int len = strlen(word);
    printf("Reversed: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", word[i]);
    }
    printf("\n");   */
/* 8 
    double a, b;
    
    printf("Enter two floating-point numbers: ");
    while (scanf("%lf %lf", &a, &b) == 2) {
        if (a * b == 0) {
            printf("Fasle\n");
        } else {
            double result = (a - b) / (a * b);
            printf("(%.2f - %.2f) / (%.2f * %.2f) = %.2f\n", 
                   a, b, a, b, result);
        }
        printf("Enter next pair (non-numeric to quit): ");
    }   */
/* 9 
    double a, b;
    
    printf("Enter two floating-point numbers: ");
    while (scanf("%lf %lf", &a, &b) == 2) {
        double result = cal(a, b);
        printf("Result: %.2f\n", result);
        printf("Enter next pair (non-numeric to quit): ");
    }   */
/* 10 
    int lower, upper;
    
    printf("Enter lower and upper integer limits: ");
    while (scanf("%d %d", &lower, &upper) == 2 && lower < upper) {
        long sum = 0;
        for (int i = lower; i <= upper; i++) {
            sum += i * i;
        }
        printf("The sums of the squares from %d to %d is %ld\n", 
               lower * lower, upper * upper, sum);
        printf("Enter next set of limits: ");
    }
    printf("Done\n");   */
/* 11 
    int numbers[8];
    
    printf("Enter 8 integers: ");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &numbers[i]);
    }
    
    printf("Reversed order: ");
    for (int i = 7; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    printf("\n");   */
/* 12 
    int terms;
    
    printf("Enter number of terms: ");
    while (scanf("%d", &terms) == 1 && terms > 0) {
        double sum1 = 0.0, sum2 = 0.0;
        
        for (int i = 1; i <= terms; i++) {
            sum1 += 1.0 / i;
            
            if (i % 2 == 1) {
                sum2 += 1.0 / i;
            } else {
                sum2 -= 1.0 / i;
            }
        }
        
        printf("Sequence 1 sum (%d terms): %.10f\n", terms, sum1);
        printf("Sequence 2 sum (%d terms): %.10f\n", terms, sum2);
        printf("Enter next number of terms (<=0 to quit): ");
    }   */
/* 13 
    int powers[8];
    
    powers[0] = 2;
    for (int i = 1; i < 8; i++) {
        powers[i] = powers[i-1] * 2;
    }

    int i = 0;
    do {
        printf("2^%d = %d\n", i+1, powers[i]);
        i++;
    } while (i < 8);    */
/* 14 
    double array1[8], array2[8];
    
    printf("Enter 8 values for the first array:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%lf", &array1[i]);
    }

    array2[0] = array1[0];
    for (int i = 1; i < 8; i++) {
        array2[i] = array2[i-1] + array1[i];
    }
 
    printf("First array: ");
    for (int i = 0; i < 8; i++) {
        printf("%8.2f", array1[i]);
    }
    printf("\nSecond array:");
    for (int i = 0; i < 8; i++) {
        printf("%8.2f", array2[i]);
    }
    printf("\n");   */
/* 15 
    char line[256];
    int i = 0;
    
    printf("Enter a line of text: ");

    char ch;
    while ((ch = getchar()) != '\n' && i < 255) {
        line[i++] = ch;
    }
    line[i] = '\0';

    printf("Reversed: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", line[j]);
    }
    printf("\n");   */
/* 16 
    double daphne = 100.0, deirdre = 100.0;
    int years = 0;
    
    while (deirdre <= daphne) {
        daphne += 100.0 * 0.10;  // 单
        deirdre *= 1.05;         // 复
        years++;
    }
    
    printf("After %d years:\n", years);
    printf("Daphne: $%.2f\n", daphne);
    printf("Deirdre: $%.2f\n", deirdre);    */
/* 17 
    double balance = 1000000.0;
    int years = 0;
    const double WI = 100000.0;
    const double IN = 0.08;
    
    while (balance > 0) {
        balance *= (1 + IN);  // 先计算利息
        balance -= WI;           // 然后取款
        years++;
    }
    
    printf("It will take %d years to deplete the account.\n", years);   */
/* 18 
    int friends = 5;
    int week = 1;
    
    printf("Week %d: %d friends\n", week, friends);
    
    while (friends <= DU) {
        friends -= week;        
        friends *= 2;           
        week++;
        printf("Week %d: %d friends\n", week, friends);
    }*/

    return 0;
}

/* 9 
double cal(double a, double b) {
    return (a - b) / (a * b);
}*/