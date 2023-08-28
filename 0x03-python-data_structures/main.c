#include <Python.h>

int main() {
    // Initialize Python interpreter
    Py_Initialize();

    // Import the Python module
    PyObject *pModule = PyImport_ImportModule("mymodule");
    if (pModule != NULL) {
        // Get a reference to the function
        PyObject *pFunc = PyObject_GetAttrString(pModule, "greet");
        if (pFunc && PyCallable_Check(pFunc)) {
            // Call the function with an argument
            PyObject *pArgs = PyTuple_Pack(1, PyUnicode_DecodeFSDefault("Alice"));
            PyObject *pValue = PyObject_CallObject(pFunc, pArgs);

            // Print the result
            if (pValue != NULL) {
                printf("%s\n", PyUnicode_AsUTF8(pValue));
                Py_DECREF(pValue);
            } else {
                PyErr_Print();
            }

            Py_XDECREF(pArgs);
            Py_XDECREF(pFunc);
        } else {
            PyErr_Print();
        }

        Py_DECREF(pModule);
    } else {
        PyErr_Print();
    }

    // Finalize Python interpreter
    Py_Finalize();

    return 0;
}
