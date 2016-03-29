#include <stdio.h>


int funcA(){
    printf("Hello World!\n");
}

/*
int funcM(){
    printf("Hello World!\n");
}*/

int funcB(){
    printf("Hello World!\n");
}

int main(int argc, char *argv[])
{
    printf("Hello World!\n");



    //void *ptrA = funcA();
    //void *ptrB = funcB();

    int (*ptrA)() = &funcA;
    //int (*ptrM)() = &funcM;
    int (*ptrB)() = &funcB;

    printf("Addr. of funcA = %p \n", ptrA);
    //printf("Addr. of funcM = %p \n", ptrM);
    printf("Addr. of funcB = %p \n", ptrB);




    return 0;
}
