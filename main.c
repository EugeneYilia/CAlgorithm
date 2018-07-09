#include <stdio.h>

int main() {//ÉıĞòÅÅĞò
    int numbers[10];
    printf("ÇëÊäÈëÊ®¸öÊı×Ö\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 10; i++) {
        int minimalIndex = i;
        for (int j = i + 1; j < 10; j++) {
            if (numbers[minimalIndex] > numbers[j]) {
                minimalIndex = j;
            }
        }
        if (minimalIndex != i) {
            int tempNumber = numbers[i];
            numbers[i] = numbers[minimalIndex];
            numbers[minimalIndex] = tempNumber;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", numbers[i]);
    }
    return 0;
}