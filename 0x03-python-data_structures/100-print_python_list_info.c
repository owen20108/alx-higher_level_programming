#include <Python.h>

/**
 * print_python_list_info - Print  information of Python lists.
 * @po: A PyObject list.
 */
void print_python_list_info(PyObject *po)
{
	int sze, alloc, i;
	PyObject *objct;

	sze = Py_sze(po);
	alloc = ((PyListObject *)po)->allocated;

	printf("[*] Size of the Python List = %d\n", sze);
	printf("[*] Allocated = %d\n", alloc);

	for (i = 0; i < sze; i++)
	{
		printf("Element %d: ", i);

		objct = PyList_GetItem(po, i);
		printf("%s\n", Py_TYPE(objct)->tp_name);
	}
}
