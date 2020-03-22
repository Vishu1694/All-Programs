#include<stdio.h>

int main()
{
int a=10;
char c='R';
void *ptr;
ptr=&a; // assigns address of int variable a to ptr

printf("\n value pointed to by generic pointer is %d", (*(int *)ptr));

ptr=&c; // assigns address of char variable a to ptr

printf("\n value pointed to by generic pointer is %c", (*(char *)ptr));

}

