#include<stdio.h>

void birthday(char y[],int x)
{
    printf("\nHappy birthday dear %s!", y);
    printf("\nYou are %d years old!", x);
}

int main()
{
    char name[]="Bro";
    int age=21;

    birthday(name,age);
    return 0;
}

