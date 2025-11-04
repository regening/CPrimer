#include <stdio.h>

/* 2.12 4 
void jolly();
void deny();    */
/* 2.12 5*/
void br();
void ic();

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
/* 2.12 5*/
    br();
    printf(",");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();


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

/* 2.12 5*/
void br(){
    printf("Brazil, Russia");
}
void ic(){
    printf("India, China");
}



