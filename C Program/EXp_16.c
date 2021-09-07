#include<stdio.h>
long permutation(int n, int r);
long factorial(int num);

int main(void)
{    
    int n, r;

    scanf("%d", &n);

    scanf("%d", &r);

    printf("Permutation = %ld\n", permutation(n, r));    
    

    return 0;
}

long permutation(int n, int r)
{
    return factorial(n) / factorial(n-r);
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


    