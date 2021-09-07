#include <stdio.h>

int main()
{
    float eng, phy, chem, math, comp; 
    float total, average, percentage;
    eng = 95,phy = 76,chem = 85,math = 90,comp = 89;
    total = eng + phy + chem + math + comp;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;
    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);
    printf("Percentage = %.2f", percentage);

    return 0;
}