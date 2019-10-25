/*
Program : 4
Find Xn. Iterative and recursive algorithms are possible with complexity log 2n
-->Iterative method using Simple algorithms
*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int base, exponent,count=0;
    long long result = 1;

    // clrscr();
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exponent);

        while (exponent != 0)
        {   
            result *= base;
            --exponent;
            count++;
        }

    printf("Answer = %lld\n", result);
    printf("Counting number -->%d", count);
    getch();
    return 0;
}