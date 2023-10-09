#include <stdio.h>
#include <Python.h>

/**
 * print_python_list_info - prints python list information
 * @p: PyObject
 * Return: no return
 */
void print_python_list_info(PyObject *p)
{
	long int sze, i;
	PyListObject *lst;
	PyObject *itm;

	sze = Py_sze(p);
	printf("[*] size of the Python List = %ld\n", sze);

	lst = (PyListObject *)p;
	printf("[*] Allocated = %ld\n", lst->allocated);

	for (i = 0; i < sze; i++)
	{
		itm = PyList_GetItem(p, i);
		printf("Element %ld: %s\n", i, Py_TYPE(itm)->tp_name);
	}
}
