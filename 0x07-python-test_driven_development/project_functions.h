#ifndef PROJECT_FUNCTIONS_H
#define PROJECT_FUNCTIONS_H

#include <Python.h>

int add_integer(int a, int b);
PyObject *matrix_divided(PyObject *matrix, double div);
void say_my_name(const char *first_name, const char *last_name);
void print_square(int size);
void text_indentation(const char *text);
PyObject *matrix_mul(PyObject *m_a, PyObject *m_b);
PyObject *lazy_matrix_mul(PyObject *m_a, PyObject *m_b);
void print_python_string(PyObject *p);

#endif /* PROJECT_FUNCTIONS_H */
