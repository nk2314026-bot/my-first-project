#include<stdio.h>
void square(int n);
void _square(int *n);

int main()
{
    int num =5;
    square(num);
    printf("numbaer =%d\n", num);
    _square(&num);
    printf("numbaer =%d\n", num);
    return 0;

    }

//call by value
void square(int n)
{
    n = n*n;
    printf("Square of number is %d\n", n);
}
//call by reference
void _square(int *n)
{
    *n = (*n)*(*n);
    printf("_Square of number is %d\n", *n); 
}