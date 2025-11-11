#include <stdio.h>

/* 7 
#define BASIC_RATE 1000.0
#define OVERTIME_RATE 1.5
#define TAX_RATE1 0.15
#define TAX_RATE2 0.20
#define TAX_RATE3 0.25
#define BREAK1 300.0
#define BREAK2 450.0    */
/* 8 
#define RATE1 8.75
#define RATE2 9.33
#define RATE3 10.00
#define RATE4 11.20
#define OVERTIME_RATE 1.5
#define TAX_RATE1 0.15
#define TAX_RATE2 0.20
#define TAX_RATE3 0.25
#define BREAK1 300.0
#define BREAK2 450.0
void pay(double rate);   */
/* 9 
int is_prime(int n);*/

int main(){

/* 1
    int space = 0, new = 0, other = 0;
    char ch;
    
    printf("Enter text (# to end):\n");
    while ((ch = getchar()) != '#') {
        if (ch == ' ') space++;
        else if (ch == '\n') new++;
        else other++;
    }
    
    printf("Spaces: %d, New: %d, Other: %d\n", space, new, other);  */
/* 2 
    char ch;
    int count = 0;
    
    printf("Enter text (# to end):\n");
    while ((ch = getchar()) != '#') {
        printf("%c: %3d  ", ch, ch);
        count++;
        
        if (count % 8 == 0) {
            printf("\n");
        }
    }
    printf("\n");   */
/* 3 
    int num, even_count = 0, odd_count = 0;
    double even_sum = 0, odd_sum = 0;
    
    printf("Enter integers (0 to stop):\n");
    while (scanf("%d", &num) == 1 && num != 0) {
        if (num % 2 == 0) {
            even_count++;
            even_sum += num;
        } else {
            odd_count++;
            odd_sum += num;
        }
    }
    
    if (even_count > 0) {
        printf("Even numbers: %d, Average: %.2f\n", even_count, even_sum / even_count);
    }
    if (odd_count > 0) {
        printf("Odd numbers: %d, Average: %.2f\n", odd_count, odd_sum / odd_count);
    }   */
/* 4 
    char ch;
    int re = 0;
    
    printf("Enter text (# to end):\n");
    while ((ch = getchar()) != '#') {
        if (ch == '.') {
            putchar('!');
            re++;
        } else if (ch == '!') {
            putchar('!');
            putchar('!');
            re++;
        } else {
            putchar(ch);
        }
    }
    
    printf("\nTotal re: %d\n", re); */
/* 5 
    char ch;
    int re = 0;
    
    printf("Enter text (# to end):\n");
    while ((ch = getchar()) != '#') {
        switch (ch) {
            case '.':
                putchar('!');
                re++;
                break;
            case '!':
                putchar('!');
                putchar('!');
                re++;
                break;
            default:
                putchar(ch);
        }
    }*/
/* 6 
    char prev = '\0', current;
    int count = 0;
    
    printf("Enter text (# to end):\n");
    while ((current = getchar()) != '#') {
        if (prev == 'e' && current == 'i') {
            count++;
        }
        prev = current;
    }
    
    printf("'ei' appeared %d times.\n", count);     */
/* 7 
    double hours, gross, taxes, net;
    
    printf("Enter hours worked: ");
    scanf("%lf", &hours);
    
    if (hours <= 40) {
        gross = hours * BASIC_RATE;
    } else {
        gross = 40 * BASIC_RATE + (hours - 40) * BASIC_RATE * OVERTIME_RATE;
    }
  
    if (gross <= BREAK1) {
        taxes = gross * TAX_RATE1;
    } else if (gross <= BREAK2) {
        taxes = BREAK1 * TAX_RATE1 + (gross - BREAK1) * TAX_RATE2;
    } else {
        taxes = BREAK1 * TAX_RATE1 + (BREAK2 - BREAK1) * TAX_RATE2 + 
                (gross - BREAK2) * TAX_RATE3;
    }
    
    net = gross - taxes;
    
    printf("Gross pay: $%.2f\n", gross);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net pay: $%.2f\n", net);*/
/* 8 
int choice;
    double rate;
    
    do {
        printf("*****************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("1) $8.75/hr                      2) $9.33/hr\n");
        printf("3) $10.00/hr                     4) $11.20/hr\n");
        printf("5) quit\n");
        printf("*****************************************************************\n");
        
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: rate = RATE1; break;
            case 2: rate = RATE2; break;
            case 3: rate = RATE3; break;
            case 4: rate = RATE4; break;
            case 5: 
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Please enter 1-5.\n");
                continue;
        }
        
        pay(rate);
        
    } while (choice != 5);  */
/* 9 
    int limit;
    
    printf("Enter a positive integer: ");
    scanf("%d", &limit);
    
    printf("Prime numbers up to %d:\n", limit);
    for (int i = 2; i <= limit; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");   */
/* 10 
    int cat;
    double income, tax;
    
    while (1) {
        printf("\nEnter tax cat (1-4, 0 to quit):\n");
        printf("1) Single\n2) Head of Household\n");
        printf("3) Married, Joint\n4) Married, Separate\n");
        printf("0) Quit\n");
        
        scanf("%d", &cat);
        if (cat == 0) break;
        if (cat < 1 || cat > 4) {
            printf("Invalid cat. Please enter 1-4.\n");
            continue;
        }
        
        printf("Enter taxable income: ");
        scanf("%lf", &income);
        
        switch (cat) {
            case 1: // Single
                if (income <= 17850) {
                    tax = income * 0.15;
                } else {
                    tax = 17850 * 0.15 + (income - 17850) * 0.28;
                }
                break;
            case 2: // Head of Household
                if (income <= 23900) {
                    tax = income * 0.15;
                } else {
                    tax = 23900 * 0.15 + (income - 23900) * 0.28;
                }
                break;
            case 3: // Married, Joint
                if (income <= 29750) {
                    tax = income * 0.15;
                } else {
                    tax = 29750 * 0.15 + (income - 29750) * 0.28;
                }
                break;
            case 4: // Married, Separate
                if (income <= 14875) {
                    tax = income * 0.15;
                } else {
                    tax = 14875 * 0.15 + (income - 14875) * 0.28;
                }
                break;
        }
        
        printf("Tax: $%.2f\n", tax);
    }   */
/* 11 
    const double ART = 2.05;
    const double BEET = 1.15;
    const double CARROT = 1.09;
    const double RATE = 0.05;
    const double THRESHOLD = 100.0;
    
    double arti = 0, beet = 0, carrot = 0;
    double total, subtotal, discount = 0, shipping, total;
    char choice;
    
    printf("Welcome to ABC Mail Order Grocery!\n");
    
    while (1) {
        printf("\nEnter item choice:\n");
        printf("a) Artichoke ($%.2f/lb)\n", ART);
        printf("b) Beet ($%.2f/lb)\n", BEET);
        printf("c) Carrot ($%.2f/lb)\n", CARROT);
        printf("q) Quit and checkout\n");
        printf("Choice: ");
        
        scanf(" %c", &choice);
        
        if (choice == 'q') break;
        
        double pounds;
        printf("Enter pounds: ");
        scanf("%lf", &pounds);
        
        switch (choice) {
            case 'a':
                arti += pounds;
                break;
            case 'b':
                beet += pounds;
                break;
            case 'c':
                carrot += pounds;
                break;
            default:
                printf("Invalid choice. Please enter a, b, c, or q.\n");
        }
    }
  
    subtotal = arti * ART + 
               beet * BEET + 
               carrot * CARROT;
    
    if (subtotal >= THRESHOLD) {
        discount = subtotal * RATE;
    }
    
    total = arti + beet + carrot;

    if (total <= 5) {
        shipping = 6.5;
    } else if (total <= 20) {
        shipping = 14.0;
    } else {
        shipping = 14.0 + (total - 20) * 0.5;
    }
    
    total = subtotal - discount + shipping;
  
    printf("\n=== ORDER SUMMARY ===\n");
    printf("Artichoke: %.2f lbs @ $%.2f/lb = $%.2f\n", 
           arti, ART, arti * ART);
    printf("Beet:      %.2f lbs @ $%.2f/lb = $%.2f\n", 
           beet, BEET, beet * BEET);
    printf("Carrot:    %.2f lbs @ $%.2f/lb = $%.2f\n", 
           carrot, CARROT, carrot * CARROT);
    printf("Subtotal: $%.2f\n", subtotal);
    
    if (discount > 0) {
        printf("Discount (5%%): -$%.2f\n", discount);
    }
    
    printf("Shipping: $%.2f\n", shipping);
    printf("TOTAL: $%.2f\n", total);    */


    return 0;
}

/* 8 
void pay(double rate) {
    double hours, gross, taxes, net;
    
    printf("Enter hours worked: ");
    scanf("%lf", &hours);
    
    if (hours <= 40) {
        gross = hours * rate;
    } else {
        gross = 40 * rate + (hours - 40) * rate * OVERTIME_RATE;
    }

    if (gross <= BREAK1) {
        taxes = gross * TAX_RATE1;
    } else if (gross <= BREAK2) {
        taxes = BREAK1 * TAX_RATE1 + (gross - BREAK1) * TAX_RATE2;
    } else {
        taxes = BREAK1 * TAX_RATE1 + (BREAK2 - BREAK1) * TAX_RATE2 + 
                (gross - BREAK2) * TAX_RATE3;
    }
    
    net = gross - taxes;
    
    printf("Gross pay: $%.2f\n", gross);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net pay: $%.2f\n", net);
}*/
/* 9 
int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;   */