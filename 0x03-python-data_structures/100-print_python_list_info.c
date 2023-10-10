#include <stdio.h>
#include <Python.h>
/**
 * print_python_list_info -prints some
 * basic info about Python lists.
 * @p: Pointer
 *
 * Return: Always 0. (Success)
 */


void print_python_list_info(PyObject *p)
{
        PyListObject *list = (PyListObject *)p;
        Py_ssize_t sze = PyList_Size(p);
        Py_ssize_t x;
        PyObject *itm;

        printf("[*] sze of the Python List = %ld\n", sze);
    printf("[*] Allocated = %ld\n", list->allocated);

        for (x = 0; x < sze; x++)
        {
                itm = PyList_Getitm(p, x);
                printf("Element %ld: %s\n", x, Py_TYPE(itm)->tp_name);
        }
}
