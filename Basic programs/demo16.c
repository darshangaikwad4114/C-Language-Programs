// 16. Program to print first n even numbers.

#include <stdio.h>
#include <conio.h> 

void main()
{
    int i = 2, n;

    printf("Enter n : ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\t", i);
        i = i + 2;
    }
}