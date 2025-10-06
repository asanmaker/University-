#pragma once

typedef struct {
    double** data;
    int rows;
    int cols;
} Matrix;

// Базовые функции
Matrix create_matrix(int rows, int cols);
void free_matrix(Matrix m);
Matrix matrix_add(Matrix a, Matrix b);
Matrix matrix_multiply(Matrix a, Matrix b);
Matrix matrix_transpose(Matrix m);

// Вспомогательные функции
void print_matrix(Matrix m);
Matrix matrix_from_array(double* data, int rows, int cols);

// ИНДИВИДУАЛЬНОЕ ЗАДАНИЕ (Вариант 8): Поэлементное умножение матриц
Matrix matrix_elementwise_multiply(Matrix a, Matrix b);
