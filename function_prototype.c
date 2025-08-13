#include<stdio.h>

void hello (char[],int); //function prototype
int main()
{

    char name[]="Bro";
    int age =21;

    hello(name,age);

    return 0;

}

void hello(char name[], int age)
{
    printf("\Hello %s",name);
    printf("\nYou are %d",age);

}


