#include <Python.h>
#include <stdio.h>
/**
 * print_python_list_info - print python list
 * @p: input
 */
void print_python_list_info(PyObject *p)
{
	unsigned int l_idx;
	unsigned int length;
	unsigned int allocated;
	PyTypeObject *typ;
	const char *nam;

	if (p == NULL)
		return;

	length = (unsigned int) PyList_Size(p);
	allocated = (unsigned int) ((PyListObject *)p)->allocated;
	printf("[*] Size of the Python List = %d\n", length);
	printf("[*] Allocated = %d\n", allocated);

	for (l_idx = 0; l_idx < length; l_idx++)
	{
		typ = PyList_GET_ITEM(p, l_idx)->ob_typ;
		nam = typ->tp_nam;
		printf("Element %d: %s\n", l_idx, nam);
	}
}
