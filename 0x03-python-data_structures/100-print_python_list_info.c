#include <Python.h>

void print_python_list_info(PyObject *p)
{
	Py_ssize_t size_pt, allocated, idx = 0;
	PyObject *elmnt;

	size_pt = PyList_Size(p);
	allocated = ((PyListObject *)p)->allocated;
	printf("[*] Size of the Python List = %ld\n", size_pt);
	printf("[*] Allocated = %ld\n", allocated);
	while (idx < size_pt)
	{
		elmnt = PyList_GET_ITEM(p, idx);
		printf("elmnt %ld: %s\n", idx, elmnt->ob_type->tp_name);
		idx++;
	}
}
