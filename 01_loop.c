#include <stdio.h>
int main(){
    int maxInput = 5;
    int i;
    double number, average , sum = 0.0;
    for (i = 1;i <= maxInput; ++i)
    {
        printf("%d .Enter the number:",i);
        scanf("%lf",&number);
        if (number < 0.0)
        {
            goto jump;
        }
        sum += number;
        jump:
        average = sum / (i - 1);
        printf("sum = %.2f\n",average);
        printf("Average = %.2f\n",average);
    }
    return 0;
}