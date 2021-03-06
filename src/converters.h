#ifndef CONVERTERS_H
#define CONVERTERS_H

#include <Python.h>
#include "emacs-module.h"

#include <vector>

emacs_value to_emacs(emacs_env *env, PyObject *retval);
PyObject* from_emacs(emacs_env *env, ptrdiff_t nargs, emacs_value args[]);


#endif // CONVERTERS_H
