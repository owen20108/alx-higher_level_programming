#include <stdio.h>
#include <Python.h>

/**
 * print_python_list_info - prints info about a python list
 * @p: PyObject
 * 
 *Return: void 
 */

void print_python_list_info(PyObject *p)
{
    long int size, x;
    PyListObject *list;
    PyObject *itm;

    size = Py_SIZE(p);
    printf("[*] Size of the Python List = %ld\n", size);

    list = (PyListObject *)p;
    printf("[*] Allocated = %ld\n", list->allocated);

    for (x = 0; x < size; x++)
    {
        itm = PyList_GetItem(p, x);
        printf("Element %ld: %s\n", x, Py_TYPE(itm)->tp_name);
    }
}
