#include <stdio.h>
#include <ctype.h>

// 6 char get_first(void);

int main(){
/* 1 
    int count = 0;
    
    printf("Enter text (Ctrl+D/Ctrl+Z to end):\n");
    while (getchar() != EOF) {
        count++;
    }
    
    printf("Characters: %d\n", count);  */
/* 2 
    int ch;
    int count = 0;
    
    printf("Enter text (Ctrl+D/Ctrl+Z to end):\n");
    while ((ch = getchar()) != EOF) {
        count++;
        
        if (ch == '\n') {
            printf("\\n: %3d  ", ch);
            printf("\n");
            count = 0;
        } else if (ch == '\t') {
            printf("\\t: %3d  ", ch);
        } else if (ch < ' ') {
            printf("^%c: %3d  ", ch + 64, ch);
        } else {
            printf(" %c: %3d  ", ch, ch);
        }
        
        if (count % 10 == 0 && ch != '\n') {
            printf("\n");
        }
    }
    
    printf("\n");   */
/* 3 
    int ch;
    int upper = 0, lower = 0;
    
    printf("Enter text (Ctrl+D/Ctrl+Z to end):\n");
    while ((ch = getchar()) != EOF) {
        if (isupper(ch)) {
            upper++;
        } else if (islower(ch)) {
            lower++;
        }
    }
    
    printf("Uppercase letters: %d\n", upper);
    printf("Lowercase letters: %d\n", lower);   */
/* 4 

    int ch;
    int letters = 0, words = 0;
    int in_word = 0;
    
    printf("Enter text (Ctrl+D/Ctrl+Z to end):\n");
    while ((ch = getchar()) != EOF) {
        if (isalpha(ch)) {
            letters++;
            if (!in_word) {
                in_word = 1;
                words++;
            }
        } else if (isspace(ch) || ispunct(ch)) {
            in_word = 0;
        }
    }
    
    if (words > 0) {
        printf("Average letters per word: %.2f\n", 
               (double)total_letters / total_words);
    } else {
        printf("No words found.\n");
    }   */
/* 5 
    int low = 1, high = 100;
    int guess;
    char response;
    
    printf("Think of a number between 1 and 100.\n");
    printf("I will try to guess it.\n");
    printf("Enter 's' if my guess is too small,\n");
    printf("      'l' if too large,\n");
    printf("      'c' if correct.\n\n");
    
    do {
        guess = (low + high) / 2;
        printf("Is it %d? ", guess);
        scanf(" %c", &response);
        
        if (response == 's') {
            low = guess + 1;
        } else if (response == 'l') {
            high = guess - 1;
        } else if (response != 'c') {
            printf("Please enter s, l, or c.\n");
        }
    } while (response != 'c');
    
    printf("I knew I could do it!\n");  */
/* 6 
    char ch;
    printf("Enter text: ");
    ch = get_first();
    printf("First non-whitespace character: '%c'\n", ch);   */
/* 7 
    const double ARTICHOKE = 2.05;
    const double BEET = 1.15;
    const double CARROT = 1.09;
    
    double artichoke = 0, beet = 0, carrot = 0;
    char choice;
    
    printf("Welcome to ABC Mail Order Grocery!\n");
    
    while (1) {
        printf("\nEnter item choice:\n");
        printf("a) Artichoke\n");
        printf("b) Beet\n");
        printf("c) Carrot\n");
        printf("q) Quit\n");
        printf("Choice: ");
        
        scanf(" %c", &choice);
        
        if (choice == 'q') break;
        
        double pounds;
        printf("Enter pounds: ");
        scanf("%lf", &pounds);
        
        switch (choice) {
            case 'a':
                artichoke += pounds;
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
    
    printf("\nOrder summary:\n");
    printf("Artichoke: %.2f lbs\n", artichoke);
    printf("Beet: %.2f lbs\n", beet);
    printf("Carrot: %.2f lbs\n", carrot);   */
/* 8 
    char operation;
    double num1, num2;
    int valid;
    
    printf("Enter the operation of your choice:\n");
    printf("a. add           s. subtract\n");
    printf("m. multiply      d. divide\n");
    printf("q. quit\n");
    
    while (scanf(" %c", &operation) == 1 && operation != 'q') {
        printf("Enter first number: ");
        while (scanf("%lf", &num1) != 1) {
            while (getchar() != '\n') continue;
            printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
        }
        
        printf("Enter second number: ");
        while (scanf("%lf", &num2) != 1) {
            while (getchar() != '\n') continue;
            printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
        }
        
        if (operation == 'd' && num2 == 0) {
            printf("Enter a number other than 0: ");
            while (scanf("%lf", &num2) != 1 || num2 == 0) {
                while (getchar() != '\n') continue;
                printf("Enter a number other than 0: ");
            }
        }
        
        switch (operation) {
            case 'a':
                printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
                break;
            case 's':
                printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                break;
            case 'm':
                printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
                break;
            case 'd':
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                break;
            default:
                printf("Invalid operation.\n");
        }
        
        printf("\nEnter the operation of your choice:\n");
        printf("a. add           s. subtract\n");
        printf("m. multiply      d. divide\n");
        printf("q. quit\n");
    }
    
    printf("Bye.\n");   */

    return 0;
}

/* 6 
char get_first(void) {
    int ch;
    while (isspace(ch = getchar())) {
        continue;
    }
    return ch;  */