#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int A[20];
    int m11, m2; /*было m1*/

    // Объявление указателей
    int* ptr_A = A;     // Указатель на начало массива A
    int* current;        // Текущий указатель для итераций

    // Инициализация генератора случайных чисел
    srand(time(NULL));

    // Заполнение массива случайными числами от -50 до 50 с использованием указателей
    printf("\nИсходный массив:\n");
    for (current = A; current < A + 20; current++) {
        *current = rand() % 101 - 50; // Диапазон от -50 до 50
        printf("%d ", *current);
    }

    // Получение m1 и m2 через указатели
    m11 = *A;           // Эквивалентно A[0]
    m2 = *(A + 1);     // Эквивалентно A[1]

    // Обработка элементов массива с использованием указателей
    for (current = A; current < A + 20; current++) {
        if (*current > 0) {
            *current += m11;
        }
        else {
            *current += m2;
        }
    }

    // Вывод измененного массива с использованием указателей
    printf("\n\nРезультат:\n");
    for (current = A; current < A + 20; current++) {
        printf("%d ", *current);
    }
    printf("\n");

    return 0;
}