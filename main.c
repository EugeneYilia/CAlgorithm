#include <stdio.h>

int main() {//��������
    printf("��������Ҫ������Ĵ�С\n");
    int size;
    scanf("%d", &size);
    int numbers[size];
    printf("������%d������\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < size; i++) {
        int minimalIndex = i;
        for (int j = i + 1; j < size; j++) {
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

    for (int i = 0; i < size; i++) {
        printf("%d\n", numbers[i]);
    }
    return 0;
}