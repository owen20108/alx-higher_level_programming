#include <Python.h>

/**
 * print_python_list_info - Print basic information  Python lists.
 * @pntr: A PyObject list.
 */
void print_python_list_info(PyObject *pntr)
{
	int size, alloc, i;
	PyObject *objct;

	size = Py_SIZE(pntr);
	alloc = ((PyListObject *)pntr)->allocated;

	printf("[*] Size of the Python List = %d\n", size);
	printf("[*] Allocated = %d\n", alloc);

	for (i = 0; i < size; i++)
	{
		printf("Element %d: ", i);

		objct = PyList_GetItem(pntr, i);
		printf("%s\n", Py_TYPE(objct)->tp_name);
	}
}
