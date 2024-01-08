#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <time.h>
#include <Python.h>
#include <pytime.h>

/**
 * print_python_list_info - Prints information about python objects
 * @p: PyObject python
 */

void print_python_list_info(PyObject *p)
{
	int size;
	int allocate;
	int iterr;
	PyObject *object;

	size = Py_SIZE(p);
	allocate = ((PyListObject *)p)->allocated;

	printf("[*] Size of the Python List = %d\n", size);
	printf("[*] Allocated = %d\n", allocate);
	for (iterr = 0; iter < size; iterr++)
	{
		printf("Element %d: ", iterr);

		object = PyList_GetItem(p, iterr);
		printf("%s\n", Py_TYPE(object)->tp_name);
	}
}
