//
// Created by М on 02.04.2023.
//

#ifndef MAIN_C_FIREFOXY_H
#define MAIN_C_FIREFOXY_H

#include <stdbool.h>
#include <time.h>

#define TIME_TEST(testCode, time) { \
    clock_t start_time = clock(); \
    testCode \
    clock_t end_time = clock();\
    clock_t sort_time = end_time - start_time; \
    time = (double) sort_time / CLOCKS_PER_SEC; \
}

#define ARRAY_SIZE(a) sizeof(a) / sizeof(a[0])

bool isUnique(const long long *const a, const int size);

void inputArray(int *a, size_t size);

void outputArray(int *a, size_t size);

bool isUppercaseLetter(char s);

bool isDigit(char s);

bool isAlpha(char s);

void swap(int *a, int *b);

int min2(int a, int b);

size_t minIndex(const int *a, size_t size);

int getDigit(int num, int digit);

int getMax(int *a, size_t size);

long long getSum(int *a, size_t size);

int getMin(int *a, size_t size);

int getNumOfDigits(int n);

int getNumOfBytes(int n);

void copyArr(int *a, int *b, size_t size);

int *copy(const int *beginSource, const int *endSource,
          int *beginDestination);

void generateRandomArray(int *a, size_t n);

void generateOrderedArray(int *a, size_t n);

void generateOrderedBackwards(int *a, size_t n);

bool isOrdered(int *a, size_t size);

#endif //MAIN_C_FIREFOXY_H
