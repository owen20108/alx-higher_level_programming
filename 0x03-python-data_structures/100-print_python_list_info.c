#include <stdio.h>
#include <Python.h>

void print_python_list_info(PyObject *p)
{
	int lngth = 0, idx;
	PyObject *itm;

	lngth = Py_SIZE(p);
	printf("[*] Size of the Python List = %d\n", lngth);
	printf("[*] Allocated = %lu\n", ((PyListObject *)p)->allocated);

	for (idx = 0; idx < lngth; idx++)
	{
		itm = PyList_GetItem(p, idx);
		printf("Element %d: %s\n", idx, Py_TYPE(itm)->tp_name);
	}
}
