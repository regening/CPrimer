#include <stdio.h>
// 1 double min(double x, double y)；
// 2 void chline(char ch, int i, int j);
// 3 void print_char(char ch, int cols, int rows);
// 4 double h(double x, double y);
// 5 void l(double *x, double *y);
// 6 void sort(double *a, double *b, double *c);
// 7 int position(char ch);
// 8 double power(double base, int ex);
// 9 double power(double base, int ex);
// 10 void to(unsigned long num, int base);
// 11 unsigned long fi(int n);

int main(){

/* 9.11 1 
    double a = 3.5, b = 2.8;
    printf("min(%.2f, %.2f) = %.2f\n", a, b, min(a, b));
    
    a = -1.2; b = -1.5;
    printf("min(%.2f, %.2f) = %.2f\n", a, b, min(a, b));
    
    a = 4.0; b = 4.0;
    printf("min(%.2f, %.2f) = %.2f\n", a, b, min(a, b));    */
/* 9.11 2 
    printf("打印5行3列的'*':\n");
    chline('*', 3, 5);
    
    printf("\n打印2行4列的'+':\n");
    chline('+', 4, 2);*/
/* 9.11 3 
    printf("打印4行6列的'#':\n");
    print_char('#', 6, 4);
    
    printf("\n打印3行2列的'@':\n");
    print_char('@', 2, 3);  */
/* 9.11 4 
    double a = 2.0, b = 3.0;
    printf("%.2f和%.2f的调和平均数: %.4f\n", a, b, h(a, b));
    
    a = 1.0; b = 1.0;
    printf("%.2f和%.2f的调和平均数: %.4f\n", a, b, h(a, b));
    
    a = 4.0; b = 4.0;
    printf("%.2f和%.2f的调和平均数: %.4f\n", a, b, h(a, b));    */
/* 9.11 5 
    double a = 3.5, b = 2.8;
    printf("替换前: a = %.2f, b = %.2f\n", a, b);
    l(&a, &b);
    printf("替换后: a = %.2f, b = %.2f\n", a, b);
    
    a = 1.2; b = 4.7;
    printf("替换前: a = %.2f, b = %.2f\n", a, b);
    l(&a, &b);
    printf("替换后: a = %.2f, b = %.2f\n", a, b);*/
/* 9.11 6 
    double x = 5.6, y = 2.3, z = 4.1;
    printf("排序前: x = %.2f, y = %.2f, z = %.2f\n", x, y, z);
    sort_three(&x, &y, &z);
    printf("排序后: x = %.2f, y = %.2f, z = %.2f\n", x, y, z);
    
    x = 9.0; y = 1.0; z = 5.0;
    printf("排序前: x = %.2f, y = %.2f, z = %.2f\n", x, y, z);
    sort_three(&x, &y, &z);
    printf("排序后: x = %.2f, y = %.2f, z = %.2f\n", x, y, z);*/
/* 9.11 7 
    int ch;
    
    while ((ch = getchar()) != EOF) {
        if (ch == '\n') continue;
        
        int pos = position(ch);
        if (pos != -1) {
            printf("字符 '%c' 是字母，在字母表中的位置是：%d\n", ch, pos);
        } else {
            printf("字符 '%c' 不是字母\n", ch);
        }
    }*/
/* 9.11 8 
    printf("2^3 = %.2f\n", power(2, 3));
    printf("2^-3 = %.4f\n", power(2, -3));
    printf("0^5 = %.2f\n", power(0, 5));
    printf("5^0 = %.2f\n", power(5, 0));
    printf("0^0 = %.2f\n", power(0, 0));    */
/* 9.11 9 
    printf("2^3 = %.2f\n", power(2, 3));
    printf("2^-3 = %.4f\n", power(2, -3));
    printf("0^5 = %.2f\n", power(0, 5));
    printf("5^0 = %.2f\n", power(5, 0));
    printf("0^0 = %.2f\n", power(0, 0));  */
/* 9.11 10 
    unsigned long number = 129;
    int base = 8;
    
    printf("%lu %d", number, base);
    to(number, base);
    printf("\n");
    
    number = 42;
    base = 2;
    printf("%lu %d", number, base);
    to(number, base);
    printf("\n");
    
    number = 255;
    base = 10;
    printf("%lu %d", number, base);
    to(number, base);
    printf("\n");   */
/* 9.11 11
    for (int i = 0; i <= 20; i++) {
        printf("fi(%d) = %lu\n", i, fi(i));
    }    */

    return 0;
}

/* 1 
double min(double x, double y) {
    return (x < y) ? x : y;
}   */
/* 2 
void chline(char ch, int i, int j) {
    for (int row = 0; row < j; row++) {
        for (int col = 0; col < i; col++) {
            putchar(ch);
        }
        putchar('\n');
    }
}   */
/* 3 
void print_char(char ch, int cols, int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            putchar(ch);
        }
        putchar('\n');
    }
}   */
/* 4 
double h(double x, double y) {
    if (x == 0 || y == 0) {
        printf("错误：参数不能为0\n");
        return 0;
    }
    return 2.0 / (1.0/x + 1.0/y);
}*/
/* 5 
void l(double *x, double *y) {
    double larger = (*x > *y) ? *x : *y;
    *x = larger;
    *y = larger;
}   */
/* 6 
void sort(double *a, double *b, double *c) {
    double temp;
    
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}   */
/* 7 
int position(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 'a' + 1;
    } else if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 1;
    } else {
        return -1;
    }
}   */
/* 8 
double power(double base, int ex) {
    if (base == 0) {
        if (ex == 0) {
            return 1;
        } else if (ex < 0) {
            return 0;
        }
        return 0;
    }
    
    if (ex == 0) {
        return 1;
    }
    
    double result = 1.0;
    int abs = (ex > 0) ? ex : -ex;
    
    for (int i = 0; i < abs; i++) {
        result *= base;
    }
    
    return (ex > 0) ? result : 1.0 / result;
}   */
/* 9 
double power(double base, int ex) {
    if (base == 0) {
        if (ex == 0) {
            return 1;
        } else if (ex < 0) {
            printf("错误：0的负次幂未定义\n");
            return 0;
        }
        return 0;
    }
    
    if (ex == 0) {
        return 1;
    }
    
    if (ex > 0) {
        return base * power(base, ex - 1);
    } else {
        return 1.0 / power(base, -ex);
    }
}*/
/* 10 
void to(unsigned long num, int base) {
    if (base < 2 || base > 10) {
        return;
    }
    
    if (num >= base) {
        to(num / base, base);
    }
    putchar('0' + num % base);
}   */
/* 11 
unsigned long fi(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    unsigned long prev1 = 0, prev2 = 1, current;
    
    for (int i = 2; i <= n; i++) {
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }
    
    return prev2;
}*/

