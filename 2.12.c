#include <stdio.h>

/* 2.12 4 
void jolly();
void deny();    */
/* 2.12 5 
void br();
void ic();  */
/* 2.12 7 
void smile();   */
/* 2.12 8 */
void two();
void one_three();

int main(){

/* 2.12 1 
    printf("李泽莹\n");
    printf("李\n");
    printf("泽莹\n");
    printf("李泽莹\n");   */ 
/* 2.12 2 
    char *name = "李泽莹";
    printf("我的名字：%s\n", name);
    printf("我的名字所在地址：%p\n",(void*)name);   */
/* 2.12 3 
    int age = 17;
    printf("我的年龄：%d\n",age);
    int day = age * 365;
    printf("我的年龄天数：%d\n",day);   */
/* 2.12 4 
    jolly();
    deny(); */
/* 2.12 5 
    br();
    printf(",");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();  */ 
/* 2.12 6 
    int toes = 10;
    int a = 2 * toes;
    int b = toes * toes;
    printf("toes的值为：%d\ntoes的二倍为：%d\ntoes的平方为：%d\n",toes ,a ,b);  */
/* 2.12 7 
    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();    */
/* 2.12 8 */
    printf("starting now\n");
    one_three();
    printf("done!");

    getchar();

    return 0;
}

/* 2.12 4 
void jolly(){
    printf("For he's a jolly good fellow!\nFor he's a jolly good fellow!\nFor he's a jolly good fellow!\n");
}
void deny(){
    printf("Which nobody can deny!\n");
}   */
/* 2.12 5 
void br(){
    printf("Brazil, Russia");
}
void ic(){
    printf("India, China");
}   */
/* 2.12 7 
void smile(){
    printf("Smile!");
}   */
/* 2.12 8 */
void two(){
    printf("two\n");
}
void one_three(){
    printf("one\n");
    two();
    printf("three\n");
}


