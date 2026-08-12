#ifndef __NUITKA_CALLS_H__
#define __NUITKA_CALLS_H__

extern PyObject *CALL_FUNCTION_WITH_ARGS11(PyThreadState *tstate, PyObject *called, PyObject *const *args) ;
extern PyObject *CALL_FUNCTION_WITH_ARGS16(PyThreadState *tstate, PyObject *called, PyObject *const *args) ;
extern PyObject *CALL_FUNCTION_WITH_POS_ARGS12(PyThreadState *tstate, PyObject *called, PyObject *pos_args) ;
extern PyObject *CALL_FUNCTION_WITH_ARGS11_KW_SPLIT(PyThreadState *tstate, PyObject *called, PyObject *const *args, PyObject *const *kw_values, PyObject *kw_names) ;
extern PyObject *CALL_FUNCTION_WITH_ARGS13_KW_SPLIT(PyThreadState *tstate, PyObject *called, PyObject *const *args, PyObject *const *kw_values, PyObject *kw_names) ;
extern PyObject *CALL_METHOD_WITH_ARGS11(PyThreadState *tstate, PyObject *source, PyObject *attr_name, PyObject *const *args) ;
#endif
