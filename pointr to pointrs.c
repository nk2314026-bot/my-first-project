#include<stdio.h>
int main()
{
    int i = 10;
    int *ptr = &i;
    int **ptr2 = &ptr;

    printf("value of i: %d\n", **ptr2);
    return 0;
}