#include <stdio.h>

//finds the gcd of two numbers

int gcd(int a, int b);

int main(void)
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("GCD of %d and %d is %d\n", n1, n2, gcd(n1, n2));
    return 0;
}

int gcd(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a%b);
    }
}


