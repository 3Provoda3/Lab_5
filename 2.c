#include <stdio.h>

int main() {
    int n;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);

    int a[n];
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Знаходження мінімального елемента
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    printf("Мінімальний елемент: %d\n", min);

    // Знаходження суми елементів між першим і другим від'ємними елементами
    int firstNegativeIndex = -1;
    int secondNegativeIndex = -1;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            if (firstNegativeIndex == -1) {
                firstNegativeIndex = i;
            } else {
                secondNegativeIndex = i;
                break;
            }
        }
    }

    if (firstNegativeIndex != -1 && secondNegativeIndex != -1) {
        for (int i = firstNegativeIndex + 1; i < secondNegativeIndex; i++) {
            sum += a[i];
        }
    }

    printf("Сума елементів між першим і другим від'ємними елементами: %d\n", sum);

    return 0;
}
