#include <Python.h>
#include <stdio.h>

/**
 * print_python_list - Prints basic info about Python lists.
 * @p: Pointer to a PyObject representing a Python list.
 */
void print_python_list(PyObject *p) {
    Py_ssize_t i, size;
    PyObject *item;

    size = PyList_Size(p);

    printf("[*] Python list info\n");
    printf("[*] Size of the Python List = %ld\n", size);
    printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);

    for (i = 0; i < size; i++) {
        item = PyList_GetItem(p, i);
        printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);
    }
}

/**
 * print_python_bytes - Prints basic info about Python bytes objects.
 * @p: Pointer to a PyObject representing a Python bytes object.
 */
void print_python_bytes(PyObject *p) {
    Py_ssize_t i, size;
    char *bytes_str;

    if (!PyBytes_Check(p)) {
        fprintf(stderr, "[.] Invalid Bytes Object\n");
        return;
    }

    size = PyBytes_Size(p);
    bytes_str = PyBytes_AsString(p);

    printf("[.] bytes object info\n");
    printf("  size: %ld\n", size);
    printf("  trying string: %s\n", bytes_str);

    printf("  first 10 bytes: ");
    for (i = 0; i < size && i < 10; i++) {
        printf("%02hhx", bytes_str[i]);
        if (i < 9 && i + 1 < size)
            printf(" ");
    }
    printf("\n");
}
