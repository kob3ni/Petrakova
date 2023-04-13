#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include <memory.h>
#include <stdlib.h>

bool isUnique(const long long *const a, const int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] == a[j]) return false;
        }
    }

    return true;
}

void inputArray(int *a, size_t size) {
    for (size_t i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
}

void outputArray(int *a, size_t size) {
    for (size_t i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

bool isEven(int a) {
    return !(a & 1);
}

bool isUppercaseLetter(char s) {
    return (s >= 'A' && s <= 'Z');
}

bool isDigit(char s) {
    return '0' < s && s < '9';
}

bool isAlpha(char s) {
    return 'a' <= s && s <= 'z' ||
           'A' <= s && s <= 'Z';
}

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int min2(int a, int b) {
    return a < b ? a : b;
}

size_t minIndex(const int *const a, size_t const size) {
    size_t index = 0;
    for (int i = 0; i < size; i++) {
        index = a[i] < a[index] ? i : index;
    }

    return index;
}

int getDigit(int num, int digit) {
    return (num / (int) pow(10, digit));
}

int getMax(int *a, size_t size) {
    int max = a[0];
    for (size_t i = 1; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}

long long getSum(int *a, size_t size) {
    long long sum = 0;
    for (size_t i = 0; i < size; i++) {
        sum += a[i];
    }

    return sum;
}

// Возвращает минимальное значение массива a размера size
int getMin(int *a, size_t size) {
    int min = a[0];
    for (size_t i = 1; i < size; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }

    return min;
}

int getNumOfDigits(int n) {
    int num = 0;
    while (n > 0) {
        num++;
        n /= 10;
    }

    return num;
}

int getNumOfBytes(int n) {
    int num = 0;
    while (n) {
        num++;
        n >>= 8;
    }

    return num;
}

void copyArr(int *a, int *b, size_t size) {
    for (int i = 0; i < size; i++) {
        b[i] = a[i];
    }
}

int *copy(const int *beginSource, const int *endSource,
          int *beginDestination) {
    size_t length = endSource - beginSource;
    memcpy(beginDestination, beginSource, length);

    return beginDestination + length;
}

void generateRandomArray(int *a, size_t n) {
    for (int i = 0; i < n; i++) {
        a[i] = rand();
    }
}

void generateOrderedArray(int *a, size_t n) {
    for (int i = 0; i < n; i++) {
        a[i] = i;
    }
}

void generateOrderedBackwards(int *a, size_t n) {
    int j = n - 1;
    for (int i = 0; i < n; i++) {
        a[i] = j--;
    }
}

bool isOrdered(int *a, size_t size) {
    for (int i = 1; i < size; i++) {
        if (a[i] < a[i - 1]) return false;
    }

    return true;
}