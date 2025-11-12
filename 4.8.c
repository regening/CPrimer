#include <stdio.h>
#include <float.h>          //  4.8 7

int main(){

/* 4.8 1 
    char name1[10], name2[10]; 
    printf("请输入名和姓");
    scanf("%s %s", name1, name2);
    printf("%s %s", name1, name2);    */
/* 4.8 2 
    char name1[10], name2[10]; 
    printf("请输入名和姓");
    scanf("%s %s", name1, name2);

    printf("\"%s\" \"%s\"\n", name1, name2);
    printf("|%20s|\n", "\"name1 name2\"");
    printf("|%-20s|\n", "\"name1 name2\"");

    int wide = strlen(name1) + strlen(name2) + 1 + 3;

    printf("|%*s|\n", wide, "\"name1 name2\"");    */
/* 4.8 3 
    double a;
    scanf("%lf", &a);

    printf("小数点计数法：%.1lf\n", a);
    printf("指数计数法：%.1e\n", a);
    printf("小数点计数法：%+.3lf\n", a);
    printf("指数计数法：%.3E\n", a);    */
/* 4.8 4 
    float high;
    char name[10];
    printf("请输入你的名字和身高(inch)：");
    scanf("%s %f", name, &high);

    float high1 = high / 12.0; 

    printf("%s,you are %.3f feet tall\n", name, high1);    */
/* 4.8 5 
    float a, b, c; 
    scanf("%f %f", &a, &b);
    c = a / b;
    printf("At %f megabits per second, a file of %f megabytes \ndownloads in %f seconds. \n", a, b, c);    */
/* 4.8 6 
    char name1[10], name2[10];
    printf("请输入名：");
    scanf("%s", name1);
    printf("请输入姓：");
    scanf("%s", name2);

    int a = strlen(name1);
    int b = strlen(name2);
    printf("%s %s\n", name1, name2);
    printf("%*d%*d\n", a, a, b + 1, b);
    printf("%s %s\n", name1, name2);
    printf("%-*d%-*d\n", a, a, b + 1, b);  */ 
/* 4.8 7 
    double a = 1.0/3.0;
    float b = 1.0/3.0;
    printf("%f %lf\n", a, b);
    printf("%.6f %.6lf\n", a, b);
    printf("%.12f %.12lf\n", a, b);
    printf("%.16f %.16lf\n", a, b);    */
/* 4.8 8 
    const float a = 3.785f;
    const float km = 1.609f;
    
    float miles, gallons;
    
    printf("请输入行驶的里程(英里)和消耗的汽油量(加仑): ");
    scanf("%f %f", &miles, &gallons);

    float mpg = miles / gallons;
    printf("燃油效率: %.1f 英里/加仑\n", mpg);
    
    float b = (a * 100.0f) / (mpg * km);
    
    printf("燃油消耗: %.1f 升/100公里\n", b);   */


    getchar();

    return 0;
}