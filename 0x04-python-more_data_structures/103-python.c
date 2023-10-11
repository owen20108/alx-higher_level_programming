#include <Python.h>
#include <stdio.h>

/**
 * print_python_bytes - gives data of the list and BytesObject
 *
 * @p: the PyObject
 */

void print_python_bytes(PyObject *p)
{
	Py_ssize_t size = 0, it = 0;
	char *strng = NULL;

	printf("[.] bytes object info\n");

	if (!PyBytes_CheckExact(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	if (PyBytes_AsStringAndSize(p, &strng, &size) != -1)
	{
		printf("  size: %zd\n", size);
		printf("  trying string: %s\n", strng);
		printf("  first %zd bytes:", size < 10 ? size + 1 : 10);
		while (it < size + 1 && it < 10)
		{
			printf(" %02hhx", strng[it]);
			it++;
		}
		printf("\n");
	}
}

/**
 * print_python_list - theow data of ListObject
 *
 * @p: the PyObject
 */

void print_python_list(PyObject *p)
{
	Py_ssize_t size = 0;
	PyObject *itm;
	int it = 0;

	if (PyList_CheckExact(p))
	{
		size = PyList_Size(p);

		printf("[*] Python list info\n");
		printf("[*] Size of the Python List = %zd\n", size);
		printf("[*] Allocated = %lu\n", ((PyListObject *)p)->allocated);

		while (it < size)
		{
			itm = PyList_GET_ITEM(p, it);
			printf("Element %d: %s\n", it, itm->ob_type->tp_name);
			if (PyBytes_Check(itm))
				print_python_bytes(itm);
			it++;
		}
	}
}
