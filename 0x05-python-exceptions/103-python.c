#include <stdio.h>
#include <python.h>

/**
 * print_python_list - Prints list information
 *
 * @p: Python Object
 * Return: no return
 */
void print_python_list(PyObject *p)
{
	long int size, x;
	PyListObject *list;
	PyObject *obj;

	setbuf(stdout, NULL);
	printf("[*] Python list info\n");

	if (!PyList_Check(p))
	{
		printf("  [ERROR] Invalid List Object\n");
		setbuf(stdout, NULL);
		return;
	}

	size = ((PyVarObject *)(p))->ob_size;
	list = (PyListObject *)p;

	printf("[*] Size of the Python List = %ld\n", size);
	printf("[*] Allocated = %ld\n", list->allocated);

	for (i = 0; x < size; x++)
	{
		obj = list->ob_item[x];
		printf("Element %ld: %s\n", x, ((obj)->ob_type)->tp_name);

		if (PyBytes_Check(obj))
			print_python_bytes(obj);
		if (PyFloat_Check(obj))
			print_python_float(obj);
	}
	setbuf(stdout, NULL);
}

/**
 * print_python_bytes - this prints bytes info
 *
 * @p: the Python Object
 * Return:  No return
 */
void print_python_bytes(PyObject *p)
{
	char *string;
	long int size, x, limit;

	setbuf(stdout, NULL);

	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		setbuf(stdout, NULL);
		return;
	}

	size = ((PyVarObject *)(p))->ob_size;
	string = ((PyBytesObject *)p)->ob_sval;

	printf("  size: %ld\n", size);
	printf("  trying string: %s\n", string);

	if (size >= 10)
		limit = 10;
	else
		limit = size + 1;

	printf("  first %ld bytes:", limit);

	for (x = 0; x < limit; x++)
		if (string[x] >= 0)
			printf(" %02x", string[x]);
		else
			printf(" %02x", 256 + string[x]);

	printf("\n");
	setbuf(stdout, NULL);
}

/**
 * print_python_float - it Prints float info
 *
 * @p: the Python Object
 * Return: No return
 */
void print_python_float(PyObject *p)
{
	double val;
	char *nf;

	setbuf(stdout, NULL);
	printf("[.] float object info\n");

	if (!PyFloat_Check(p))
	{
		printf("  [ERROR] Invalid Float Object\n");
		setbuf(stdout, NULL);
		return;
	}

	val = ((PyFloatObject *)(p))->ob_fval;
	nf = PyOS_double_to_string(val, 'r', 0, Py_DTSF_ADD_DOT_0, Py_DTST_FINITE);

	printf("  value: %s\n", nf);
	setbuf(stdout, NULL);
}

