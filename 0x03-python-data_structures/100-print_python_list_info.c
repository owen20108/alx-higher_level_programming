#include <stdio.h>
#include <Python.h>

void print_python_list_info(PyObject *p) {
    PyListObject *list = (PyListObject *)p;
    Py_ssize_t size, allocated, i;
    PyObject *itm;

    size = Py_SIZE(list);
    allocated = list->allocated;

    printf("[*] Size of the Python List = %ld\n", size);
    printf("[*] Allocated = %ld\n", allocated);

    for (i = 0; i < size; i++) {
        itm = PyList_GetItem(p, i);
        printf("Element %ld: %s\n", i, Py_TYPE(itm)->tp_name);
    }
}
