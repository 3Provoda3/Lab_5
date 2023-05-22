#include <stdio.h>

double findSumOfThreeLargest(double a[], int n)
{
    double max1 = __DBL_HAS_INFINITY__;
    double max2 = __DBL_HAS_INFINITY__;
    double max3 = __DBL_HAS_INFINITY__;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2)
        {
            max3 = max2;
            max2 = a[i];
        }
        else if (a[i] > max3)
        {
            max3 = a[i];
        }
    }
    return max1 + max2 + max3;
}
int main()
{
    int n;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);

      double a[n];
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    double sum = findSumOfThreeLargest(a, n);
    printf("Сума трьох найбільших чисел: %.2lf\n", sum);

    return 0;
}