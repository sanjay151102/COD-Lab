#include<stdio.h> 
long combination(int n, int r);
long factorial(int num);

int main(void)
{    
    int n, r;
    scanf("%d", &n);
    scanf("%d", &r);

    printf("%ld", combination(n, r));

    return 0; 
}
long permutation(int n, int r)
{
    return factorial(n) / factorial(n-r);
}

long combination(int n, int r)
{
    return permutation(n, r) / factorial(r);
}

long factorial(int num)
{
    long long fact = 1;

    while(num > 0)
    {
        fact *= num;
        num--;
    }

    return fact;
}