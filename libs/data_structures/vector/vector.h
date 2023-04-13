
#ifndef UNTITLED_VECTOR_H
#define UNTITLED_VECTOR_H

#include <stdio.h>
#include <stdbool.h>


// Коммит второй

typedef struct vector {
    int *data;
    size_t size;
    size_t capacity;
} Vector;

Vector createVector(size_t n);

void reserve(Vector *v, size_t newCapacity);

void clear(Vector *v);

void shrinkToFit(Vector *v);

void deleteVector(Vector *v);



#endif //UNTITLED_VECTOR_H