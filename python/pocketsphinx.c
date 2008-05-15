/* Generated by Pyrex 0.9.6.4 on Thu May 15 00:00:03 2008 */

#define PY_SSIZE_T_CLEAN
#include "Python.h"
#include "structmember.h"
#ifndef PY_LONG_LONG
  #define PY_LONG_LONG LONG_LONG
#endif
#if PY_VERSION_HEX < 0x02050000
  typedef int Py_ssize_t;
  #define PY_SSIZE_T_MAX INT_MAX
  #define PY_SSIZE_T_MIN INT_MIN
  #define PyInt_FromSsize_t(z) PyInt_FromLong(z)
  #define PyInt_AsSsize_t(o)	PyInt_AsLong(o)
#endif
#ifndef WIN32
  #ifndef __stdcall
    #define __stdcall
  #endif
  #ifndef __cdecl
    #define __cdecl
  #endif
#endif
#ifdef __cplusplus
#define __PYX_EXTERN_C extern "C"
#else
#define __PYX_EXTERN_C extern
#endif
#include <math.h>
#include "cmd_ln.h"
#include "ckd_alloc.h"
#include "ngram_model.h"
#include "fsg_model.h"
#include "logmath.h"
#include "fsg_set.h"
#include "stdio.h"
#include "pocketsphinx.h"


typedef struct {PyObject **p; char *s;} __Pyx_InternTabEntry; /*proto*/
typedef struct {PyObject **p; char *s; long n;} __Pyx_StringTabEntry; /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
static char **__pyx_f;

static int __Pyx_GetStarArgs(PyObject **args, PyObject **kwds, char *kwd_list[],     Py_ssize_t nargs, PyObject **args2, PyObject **kwds2, char rqd_kwds[]); /*proto*/

static int __Pyx_ArgTypeTest(PyObject *obj, PyTypeObject *type, int none_allowed, char *name); /*proto*/

static PyObject *__Pyx_UnpackItem(PyObject *); /*proto*/
static int __Pyx_EndUnpack(PyObject *); /*proto*/

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name); /*proto*/

static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb); /*proto*/

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t); /*proto*/

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from pocketsphinx */

struct __pyx_obj_12pocketsphinx_Config {
  PyObject_HEAD
  cmd_ln_t *config;
  int retained;
  char **argv;
  int argc;
};

struct __pyx_obj_12pocketsphinx_Decoder {
  PyObject_HEAD
  ps_decoder_t *ps;
};



static PyTypeObject *__pyx_ptype_12pocketsphinx_Config = 0;
static PyTypeObject *__pyx_ptype_12pocketsphinx_Decoder = 0;


/* Implementation of pocketsphinx */

static PyObject *__pyx_n_iteritems;

static PyObject *__pyx_k1p;
static PyObject *__pyx_k2p;

static char __pyx_k1[] = "-";
static char __pyx_k2[] = "-";

static int __pyx_f_12pocketsphinx_6Config___cinit__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_12pocketsphinx_6Config___cinit__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_kwargs = 0;
  int __pyx_v_i;
  PyObject *__pyx_v_k;
  PyObject *__pyx_v_v;
  int __pyx_r;
  Py_ssize_t __pyx_1;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  int __pyx_5;
  char *__pyx_6;
  static char *__pyx_argnames[] = {0};
  if (__Pyx_GetStarArgs(&__pyx_args, &__pyx_kwds, __pyx_argnames, 0, 0, &__pyx_v_kwargs, 0) < 0) return -1;
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) {
    Py_XDECREF(__pyx_args);
    Py_XDECREF(__pyx_kwds);
    Py_XDECREF(__pyx_v_kwargs);
    return -1;
  }
  Py_INCREF(__pyx_v_self);
  __pyx_v_k = Py_None; Py_INCREF(Py_None);
  __pyx_v_v = Py_None; Py_INCREF(Py_None);

  /* "/home/dhuggins/Projects/Sphinx/pocketsphinx/python/pocketsphinx.pyx":101 */
  __pyx_1 = PyObject_Length(__pyx_v_kwargs); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 101; goto __pyx_L1;}
  ((struct __pyx_obj_12pocketsphinx_Config *)__pyx_v_self)->argc = (__pyx_1 * 2);

  /* "/home/dhuggins/Projects/Sphinx/pocketsphinx/python/pocketsphinx.pyx":102 */
  ((struct __pyx_obj_12pocketsphinx_Config *)__pyx_v_self)->argv = ((char **)ckd_calloc(((struct __pyx_obj_12pocketsphinx_Config *)__pyx_v_self)->argc,(sizeof(char *))));

  /* "/home/dhuggins/Projects/Sphinx/pocketsphinx/python/pocketsphinx.pyx":103 */
  __pyx_v_i = 0;

  /* "/home/dhuggins/Projects/Sphinx/pocketsphinx/python/pocketsphinx.pyx":104 */
  __pyx_2 = PyObject_GetAttr(__pyx_v_kwargs, __pyx_n_iteritems); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 104; goto __pyx_L1;}
  __pyx_3 = PyObject_CallObject(__pyx_2, 0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 104; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_2 = PyObject_GetIter(__pyx_3); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 104; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  for (;;) {
    __pyx_3 = PyIter_Next(__pyx_2);
    if (!__pyx_3) {
      if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 104; goto __pyx_L1;}
      break;
    }
    __pyx_4 = PyObject_GetIter(__pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 104; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __pyx_3 = __Pyx_UnpackItem(__pyx_4); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 104; goto __pyx_L1;}
    Py_DECREF(__pyx_v_k);
    __pyx_v_k = __pyx_3;
    __pyx_3 = 0;
    __pyx_3 = __Pyx_UnpackItem(__pyx_4); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 104; goto __pyx_L1;}
    Py_DECREF(__pyx_v_v);
    __pyx_v_v = __pyx_3;
    __pyx_3 = 0;
    if (__Pyx_EndUnpack(__pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 104; goto __pyx_L1;}
    Py_DECREF(__pyx_4); __pyx_4 = 0;

    /* "/home/dhuggins/Projects/Sphinx/pocketsphinx/python/pocketsphinx.pyx":105 */
    __pyx_3 = PyInt_FromLong(0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 105; goto __pyx_L1;}
    __pyx_4 = PyObject_GetItem(__pyx_v_k, __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 105; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    if (PyObject_Cmp(__pyx_4, __pyx_k1p, &__pyx_5) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 105; goto __pyx_L1;}
    __pyx_5 = __pyx_5 != 0;
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    if (__pyx_5) {
      __pyx_3 = PyNumber_Add(__pyx_k2p, __pyx_v_k); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 106; goto __pyx_L1;}
      Py_DECREF(__pyx_v_k);
      __pyx_v_k = __pyx_3;
      __pyx_3 = 0;
      goto __pyx_L4;
    }
    __pyx_L4:;

    /* "/home/dhuggins/Projects/Sphinx/pocketsphinx/python/pocketsphinx.pyx":107 */
    __pyx_6 = PyString_AsString(__pyx_v_k); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 107; goto __pyx_L1;}
    (((struct __pyx_obj_12pocketsphinx_Config *)__pyx_v_self)->argv[__pyx_v_i]) = ckd_salloc(__pyx_6);

    /* "/home/dhuggins/Projects/Sphinx/pocketsphinx/python/pocketsphinx.pyx":108 */
    __pyx_6 = PyString_AsString(__pyx_v_v); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 108; goto __pyx_L1;}
    (((struct __pyx_obj_12pocketsphinx_Config *)__pyx_v_self)->argv[(__pyx_v_i + 1)]) = ckd_salloc(__pyx_6);

    /* "/home/dhuggins/Projects/Sphinx/pocketsphinx/python/pocketsphinx.pyx":109 */
    __pyx_v_i = (__pyx_v_i + 2);
  }
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "/home/dhuggins/Projects/Sphinx/pocketsphinx/python/pocketsphinx.pyx":110 */
  ((struct __pyx_obj_12pocketsphinx_Config *)__pyx_v_self)->config = cmd_ln_parse_r(NULL,ps_args(),((struct __pyx_obj_12pocketsphinx_Config *)__pyx_v_self)->argc,((struct __pyx_obj_12pocketsphinx_Config *)__pyx_v_self)->argv,0);

  /* "/home/dhuggins/Projects/Sphinx/pocketsphinx/python/pocketsphinx.pyx":111 */
  ((struct __pyx_obj_12pocketsphinx_Config *)__pyx_v_self)->retained = 0;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  __Pyx_AddTraceback("pocketsphinx.Config.__cinit__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_XDECREF(__pyx_v_kwargs);
  Py_DECREF(__pyx_v_k);
  Py_DECREF(__pyx_v_v);
  Py_DECREF(__pyx_v_self);
  Py_XDECREF(__pyx_args);
  Py_XDECREF(__pyx_kwds);
  return __pyx_r;
}

static void __pyx_f_12pocketsphinx_6Config___dealloc__(PyObject *__pyx_v_self); /*proto*/
static void __pyx_f_12pocketsphinx_6Config___dealloc__(PyObject *__pyx_v_self) {
  PyObject *__pyx_v_i;
  int __pyx_1;
  long __pyx_2;
  PyObject *__pyx_3 = 0;
  Py_ssize_t __pyx_4;
  Py_INCREF(__pyx_v_self);
  __pyx_v_i = Py_None; Py_INCREF(Py_None);
  __pyx_1 = (((struct __pyx_obj_12pocketsphinx_Config *)__pyx_v_self)->retained == 0);
  if (__pyx_1) {

    /* "/home/dhuggins/Projects/Sphinx/pocketsphinx/python/pocketsphinx.pyx":115 */
    cmd_ln_free_r(((struct __pyx_obj_12pocketsphinx_Config *)__pyx_v_self)->config);

    /* "/home/dhuggins/Projects/Sphinx/pocketsphinx/python/pocketsphinx.pyx":116 */
    __pyx_1 = ((struct __pyx_obj_12pocketsphinx_Config *)__pyx_v_self)->argc;
    for (__pyx_2 = 0; __pyx_2 < __pyx_1; ++__pyx_2) {
      __pyx_3 = PyInt_FromLong(__pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 116; goto __pyx_L1;}
      Py_DECREF(__pyx_v_i);
      __pyx_v_i = __pyx_3;
      __pyx_3 = 0;
      __pyx_4 = PyInt_AsSsize_t(__pyx_v_i); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 117; goto __pyx_L1;}
      ckd_free((((struct __pyx_obj_12pocketsphinx_Config *)__pyx_v_self)->argv[__pyx_4]));
    }

    /* "/home/dhuggins/Projects/Sphinx/pocketsphinx/python/pocketsphinx.pyx":118 */
    ckd_free(((struct __pyx_obj_12pocketsphinx_Config *)__pyx_v_self)->argv);

    /* "/home/dhuggins/Projects/Sphinx/pocketsphinx/python/pocketsphinx.pyx":119 */
    ((struct __pyx_obj_12pocketsphinx_Config *)__pyx_v_self)->argv = NULL;

    /* "/home/dhuggins/Projects/Sphinx/pocketsphinx/python/pocketsphinx.pyx":120 */
    ((struct __pyx_obj_12pocketsphinx_Config *)__pyx_v_self)->argc = 0;
    goto __pyx_L2;
  }
  __pyx_L2:;

  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("pocketsphinx.Config.__dealloc__");
  __pyx_L0:;
  Py_DECREF(__pyx_v_i);
  Py_DECREF(__pyx_v_self);
}

static PyObject *__pyx_f_12pocketsphinx_6Config_retain(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_12pocketsphinx_6Config_retain(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_r;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return 0;
  Py_INCREF(__pyx_v_self);
  ((struct __pyx_obj_12pocketsphinx_Config *)__pyx_v_self)->retained = (((struct __pyx_obj_12pocketsphinx_Config *)__pyx_v_self)->retained + 1);

  __pyx_r = Py_None; Py_INCREF(Py_None);
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_12pocketsphinx_6Config_release(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_12pocketsphinx_6Config_release(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_r;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return 0;
  Py_INCREF(__pyx_v_self);
  ((struct __pyx_obj_12pocketsphinx_Config *)__pyx_v_self)->retained = (((struct __pyx_obj_12pocketsphinx_Config *)__pyx_v_self)->retained - 1);

  __pyx_r = Py_None; Py_INCREF(Py_None);
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_n_retain;
static PyObject *__pyx_n_RuntimeError;

static PyObject *__pyx_k3p;

static char __pyx_k3[] = "Failed to initialize PocketSphinx";

static int __pyx_f_12pocketsphinx_7Decoder___cinit__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_12pocketsphinx_7Decoder___cinit__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  struct __pyx_obj_12pocketsphinx_Config *__pyx_v_cmdln = 0;
  int __pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  int __pyx_3;
  static char *__pyx_argnames[] = {"cmdln",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_cmdln)) return -1;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_cmdln);
  if (!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_cmdln), __pyx_ptype_12pocketsphinx_Config, 1, "cmdln")) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 137; goto __pyx_L1;}

  /* "/home/dhuggins/Projects/Sphinx/pocketsphinx/python/pocketsphinx.pyx":139 */
  __pyx_1 = PyObject_GetAttr(((PyObject *)__pyx_v_cmdln), __pyx_n_retain); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 139; goto __pyx_L1;}
  __pyx_2 = PyObject_CallObject(__pyx_1, 0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 139; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "/home/dhuggins/Projects/Sphinx/pocketsphinx/python/pocketsphinx.pyx":140 */
  ((struct __pyx_obj_12pocketsphinx_Decoder *)__pyx_v_self)->ps = ps_init(__pyx_v_cmdln->config);

  /* "/home/dhuggins/Projects/Sphinx/pocketsphinx/python/pocketsphinx.pyx":141 */
  __pyx_3 = (((struct __pyx_obj_12pocketsphinx_Decoder *)__pyx_v_self)->ps == NULL);
  if (__pyx_3) {
    __pyx_1 = __Pyx_GetName(__pyx_b, __pyx_n_RuntimeError); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 142; goto __pyx_L1;}
    __Pyx_Raise(__pyx_1, __pyx_k3p, 0);
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 142; goto __pyx_L1;}
    goto __pyx_L2;
  }
  __pyx_L2:;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("pocketsphinx.Decoder.__cinit__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_cmdln);
  return __pyx_r;
}

static void __pyx_f_12pocketsphinx_7Decoder___dealloc__(PyObject *__pyx_v_self); /*proto*/
static void __pyx_f_12pocketsphinx_7Decoder___dealloc__(PyObject *__pyx_v_self) {
  Py_INCREF(__pyx_v_self);
  ps_free(((struct __pyx_obj_12pocketsphinx_Decoder *)__pyx_v_self)->ps);

  Py_DECREF(__pyx_v_self);
}

static __Pyx_InternTabEntry __pyx_intern_tab[] = {
  {&__pyx_n_RuntimeError, "RuntimeError"},
  {&__pyx_n_iteritems, "iteritems"},
  {&__pyx_n_retain, "retain"},
  {0, 0}
};

static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {&__pyx_k1p, __pyx_k1, sizeof(__pyx_k1)},
  {&__pyx_k2p, __pyx_k2, sizeof(__pyx_k2)},
  {&__pyx_k3p, __pyx_k3, sizeof(__pyx_k3)},
  {0, 0, 0}
};

static PyObject *__pyx_tp_new_12pocketsphinx_Config(PyTypeObject *t, PyObject *a, PyObject *k) {
  PyObject *o = (*t->tp_alloc)(t, 0);
  if (!o) return 0;
  if (__pyx_f_12pocketsphinx_6Config___cinit__(o, a, k) < 0) {
    Py_DECREF(o); o = 0;
  }
  return o;
}

static void __pyx_tp_dealloc_12pocketsphinx_Config(PyObject *o) {
  {
    PyObject *etype, *eval, *etb;
    PyErr_Fetch(&etype, &eval, &etb);
    ++o->ob_refcnt;
    __pyx_f_12pocketsphinx_6Config___dealloc__(o);
    if (PyErr_Occurred()) PyErr_WriteUnraisable(o);
    --o->ob_refcnt;
    PyErr_Restore(etype, eval, etb);
  }
  (*o->ob_type->tp_free)(o);
}

static int __pyx_tp_traverse_12pocketsphinx_Config(PyObject *o, visitproc v, void *a) {
  return 0;
}

static int __pyx_tp_clear_12pocketsphinx_Config(PyObject *o) {
  return 0;
}

static struct PyMethodDef __pyx_methods_12pocketsphinx_Config[] = {
  {"retain", (PyCFunction)__pyx_f_12pocketsphinx_6Config_retain, METH_VARARGS|METH_KEYWORDS, 0},
  {"release", (PyCFunction)__pyx_f_12pocketsphinx_6Config_release, METH_VARARGS|METH_KEYWORDS, 0},
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_Config = {
  0, /*nb_add*/
  0, /*nb_subtract*/
  0, /*nb_multiply*/
  0, /*nb_divide*/
  0, /*nb_remainder*/
  0, /*nb_divmod*/
  0, /*nb_power*/
  0, /*nb_negative*/
  0, /*nb_positive*/
  0, /*nb_absolute*/
  0, /*nb_nonzero*/
  0, /*nb_invert*/
  0, /*nb_lshift*/
  0, /*nb_rshift*/
  0, /*nb_and*/
  0, /*nb_xor*/
  0, /*nb_or*/
  0, /*nb_coerce*/
  0, /*nb_int*/
  0, /*nb_long*/
  0, /*nb_float*/
  0, /*nb_oct*/
  0, /*nb_hex*/
  0, /*nb_inplace_add*/
  0, /*nb_inplace_subtract*/
  0, /*nb_inplace_multiply*/
  0, /*nb_inplace_divide*/
  0, /*nb_inplace_remainder*/
  0, /*nb_inplace_power*/
  0, /*nb_inplace_lshift*/
  0, /*nb_inplace_rshift*/
  0, /*nb_inplace_and*/
  0, /*nb_inplace_xor*/
  0, /*nb_inplace_or*/
  0, /*nb_floor_divide*/
  0, /*nb_true_divide*/
  0, /*nb_inplace_floor_divide*/
  0, /*nb_inplace_true_divide*/
  #if Py_TPFLAGS_DEFAULT & Py_TPFLAGS_HAVE_INDEX
  0, /*nb_index*/
  #endif
};

static PySequenceMethods __pyx_tp_as_sequence_Config = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_Config = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_Config = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_12pocketsphinx_Config = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "pocketsphinx.Config", /*tp_name*/
  sizeof(struct __pyx_obj_12pocketsphinx_Config), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_12pocketsphinx_Config, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_Config, /*tp_as_number*/
  &__pyx_tp_as_sequence_Config, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_Config, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_Config, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  0, /*tp_doc*/
  __pyx_tp_traverse_12pocketsphinx_Config, /*tp_traverse*/
  __pyx_tp_clear_12pocketsphinx_Config, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_12pocketsphinx_Config, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_12pocketsphinx_Config, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};

static PyObject *__pyx_tp_new_12pocketsphinx_Decoder(PyTypeObject *t, PyObject *a, PyObject *k) {
  PyObject *o = (*t->tp_alloc)(t, 0);
  if (!o) return 0;
  if (__pyx_f_12pocketsphinx_7Decoder___cinit__(o, a, k) < 0) {
    Py_DECREF(o); o = 0;
  }
  return o;
}

static void __pyx_tp_dealloc_12pocketsphinx_Decoder(PyObject *o) {
  {
    PyObject *etype, *eval, *etb;
    PyErr_Fetch(&etype, &eval, &etb);
    ++o->ob_refcnt;
    __pyx_f_12pocketsphinx_7Decoder___dealloc__(o);
    if (PyErr_Occurred()) PyErr_WriteUnraisable(o);
    --o->ob_refcnt;
    PyErr_Restore(etype, eval, etb);
  }
  (*o->ob_type->tp_free)(o);
}

static int __pyx_tp_traverse_12pocketsphinx_Decoder(PyObject *o, visitproc v, void *a) {
  return 0;
}

static int __pyx_tp_clear_12pocketsphinx_Decoder(PyObject *o) {
  return 0;
}

static struct PyMethodDef __pyx_methods_12pocketsphinx_Decoder[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_Decoder = {
  0, /*nb_add*/
  0, /*nb_subtract*/
  0, /*nb_multiply*/
  0, /*nb_divide*/
  0, /*nb_remainder*/
  0, /*nb_divmod*/
  0, /*nb_power*/
  0, /*nb_negative*/
  0, /*nb_positive*/
  0, /*nb_absolute*/
  0, /*nb_nonzero*/
  0, /*nb_invert*/
  0, /*nb_lshift*/
  0, /*nb_rshift*/
  0, /*nb_and*/
  0, /*nb_xor*/
  0, /*nb_or*/
  0, /*nb_coerce*/
  0, /*nb_int*/
  0, /*nb_long*/
  0, /*nb_float*/
  0, /*nb_oct*/
  0, /*nb_hex*/
  0, /*nb_inplace_add*/
  0, /*nb_inplace_subtract*/
  0, /*nb_inplace_multiply*/
  0, /*nb_inplace_divide*/
  0, /*nb_inplace_remainder*/
  0, /*nb_inplace_power*/
  0, /*nb_inplace_lshift*/
  0, /*nb_inplace_rshift*/
  0, /*nb_inplace_and*/
  0, /*nb_inplace_xor*/
  0, /*nb_inplace_or*/
  0, /*nb_floor_divide*/
  0, /*nb_true_divide*/
  0, /*nb_inplace_floor_divide*/
  0, /*nb_inplace_true_divide*/
  #if Py_TPFLAGS_DEFAULT & Py_TPFLAGS_HAVE_INDEX
  0, /*nb_index*/
  #endif
};

static PySequenceMethods __pyx_tp_as_sequence_Decoder = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_Decoder = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_Decoder = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_12pocketsphinx_Decoder = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "pocketsphinx.Decoder", /*tp_name*/
  sizeof(struct __pyx_obj_12pocketsphinx_Decoder), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_12pocketsphinx_Decoder, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_Decoder, /*tp_as_number*/
  &__pyx_tp_as_sequence_Decoder, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_Decoder, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_Decoder, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  "\n    PocketSphinx decoder class.\n\n    To initialize the PocketSphinx decoder, you must first create a\n    pocketsphinx.Config object.\n    ", /*tp_doc*/
  __pyx_tp_traverse_12pocketsphinx_Decoder, /*tp_traverse*/
  __pyx_tp_clear_12pocketsphinx_Decoder, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_12pocketsphinx_Decoder, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_12pocketsphinx_Decoder, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};

static struct PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC initpocketsphinx(void); /*proto*/
PyMODINIT_FUNC initpocketsphinx(void) {
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("pocketsphinx", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 12; goto __pyx_L1;};
  Py_INCREF(__pyx_m);
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 12; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 12; goto __pyx_L1;};
  if (__Pyx_InternStrings(__pyx_intern_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 12; goto __pyx_L1;};
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 12; goto __pyx_L1;};
  if (PyType_Ready(&__pyx_type_12pocketsphinx_Config) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 86; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "Config", (PyObject *)&__pyx_type_12pocketsphinx_Config) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 86; goto __pyx_L1;}
  __pyx_ptype_12pocketsphinx_Config = &__pyx_type_12pocketsphinx_Config;
  if (PyType_Ready(&__pyx_type_12pocketsphinx_Decoder) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 128; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "Decoder", (PyObject *)&__pyx_type_12pocketsphinx_Decoder) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 128; goto __pyx_L1;}
  __pyx_ptype_12pocketsphinx_Decoder = &__pyx_type_12pocketsphinx_Decoder;

  /* "/home/dhuggins/Projects/Sphinx/pocketsphinx/python/pocketsphinx.pyx":144 */
  return;
  __pyx_L1:;
  __Pyx_AddTraceback("pocketsphinx");
}

static char *__pyx_filenames[] = {
  "pocketsphinx.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
}

static int __Pyx_GetStarArgs(
    PyObject **args, 
    PyObject **kwds,
    char *kwd_list[], 
    Py_ssize_t nargs,
    PyObject **args2, 
    PyObject **kwds2,
    char rqd_kwds[])
{
    PyObject *x = 0, *args1 = 0, *kwds1 = 0;
    int i;
    char **p;
    
    if (args2)
        *args2 = 0;
    if (kwds2)
        *kwds2 = 0;
    
    if (args2) {
        args1 = PyTuple_GetSlice(*args, 0, nargs);
        if (!args1)
            goto bad;
        *args2 = PyTuple_GetSlice(*args, nargs, PyTuple_GET_SIZE(*args));
        if (!*args2)
            goto bad;
    }
    else if (PyTuple_GET_SIZE(*args) > nargs) {
        int m = nargs;
        int n = PyTuple_GET_SIZE(*args);
        PyErr_Format(PyExc_TypeError,
            "function takes at most %d positional arguments (%d given)",
                m, n);
        goto bad;
    }
    else {
        args1 = *args;
        Py_INCREF(args1);
    }
    
    if (rqd_kwds && !*kwds)
            for (i = 0, p = kwd_list; *p; i++, p++)
                if (rqd_kwds[i])
                    goto missing_kwarg;
    
    if (kwds2) {
        if (*kwds) {
            kwds1 = PyDict_New();
            if (!kwds1)
                goto bad;
            *kwds2 = PyDict_Copy(*kwds);
            if (!*kwds2)
                goto bad;
            for (i = 0, p = kwd_list; *p; i++, p++) {
                x = PyDict_GetItemString(*kwds, *p);
                if (x) {
                    if (PyDict_SetItemString(kwds1, *p, x) < 0)
                        goto bad;
                    if (PyDict_DelItemString(*kwds2, *p) < 0)
                        goto bad;
                }
                else if (rqd_kwds && rqd_kwds[i])
                    goto missing_kwarg;
            }
        }
        else {
            *kwds2 = PyDict_New();
            if (!*kwds2)
                goto bad;
        }
    }
    else {
        kwds1 = *kwds;
        Py_XINCREF(kwds1);
        if (rqd_kwds && *kwds)
            for (i = 0, p = kwd_list; *p; i++, p++)
                if (rqd_kwds[i] && !PyDict_GetItemString(*kwds, *p))
                        goto missing_kwarg;
    }
    
    *args = args1;
    *kwds = kwds1;
    return 0;
missing_kwarg:
    PyErr_Format(PyExc_TypeError,
        "required keyword argument '%s' is missing", *p);
bad:
    Py_XDECREF(args1);
    Py_XDECREF(kwds1);
    if (args2) {
        Py_XDECREF(*args2);
    }
    if (kwds2) {
        Py_XDECREF(*kwds2);
    }
    return -1;
}

static int __Pyx_ArgTypeTest(PyObject *obj, PyTypeObject *type, int none_allowed, char *name) {
    if (!type) {
        PyErr_Format(PyExc_SystemError, "Missing type object");
        return 0;
    }
    if ((none_allowed && obj == Py_None) || PyObject_TypeCheck(obj, type))
        return 1;
    PyErr_Format(PyExc_TypeError,
        "Argument '%s' has incorrect type (expected %s, got %s)",
        name, type->tp_name, obj->ob_type->tp_name);
    return 0;
}

static void __Pyx_UnpackError(void) {
    PyErr_SetString(PyExc_ValueError, "unpack sequence of wrong size");
}

static PyObject *__Pyx_UnpackItem(PyObject *iter) {
    PyObject *item;
    if (!(item = PyIter_Next(iter))) {
        if (!PyErr_Occurred())
            __Pyx_UnpackError();
    }
    return item;
}

static int __Pyx_EndUnpack(PyObject *iter) {
    PyObject *item;
    if ((item = PyIter_Next(iter))) {
        Py_DECREF(item);
        __Pyx_UnpackError();
        return -1;
    }
    else if (!PyErr_Occurred())
        return 0;
    else
        return -1;
}

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name) {
    PyObject *result;
    result = PyObject_GetAttr(dict, name);
    if (!result)
        PyErr_SetObject(PyExc_NameError, name);
    return result;
}

static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb) {
    Py_XINCREF(type);
    Py_XINCREF(value);
    Py_XINCREF(tb);
    /* First, check the traceback argument, replacing None with NULL. */
    if (tb == Py_None) {
        Py_DECREF(tb);
        tb = 0;
    }
    else if (tb != NULL && !PyTraceBack_Check(tb)) {
        PyErr_SetString(PyExc_TypeError,
            "raise: arg 3 must be a traceback or None");
        goto raise_error;
    }
    /* Next, replace a missing value with None */
    if (value == NULL) {
        value = Py_None;
        Py_INCREF(value);
    }
    #if PY_VERSION_HEX < 0x02050000
    if (!PyClass_Check(type))
    #else
    if (!PyType_Check(type))
    #endif
    {
        /* Raising an instance.  The value should be a dummy. */
        if (value != Py_None) {
            PyErr_SetString(PyExc_TypeError,
                "instance exception may not have a separate value");
            goto raise_error;
        }
        /* Normalize to raise <class>, <instance> */
        Py_DECREF(value);
        value = type;
        #if PY_VERSION_HEX < 0x02050000
            if (PyInstance_Check(type)) {
                type = (PyObject*) ((PyInstanceObject*)type)->in_class;
                Py_INCREF(type);
            }
            else {
                PyErr_SetString(PyExc_TypeError,
                    "raise: exception must be an old-style class or instance");
                goto raise_error;
            }
        #else
            type = (PyObject*) type->ob_type;
            Py_INCREF(type);
            if (!PyType_IsSubtype((PyTypeObject *)type, (PyTypeObject *)PyExc_BaseException)) {
                PyErr_SetString(PyExc_TypeError,
                    "raise: exception class must be a subclass of BaseException");
                goto raise_error;
            }
        #endif
    }
    PyErr_Restore(type, value, tb);
    return;
raise_error:
    Py_XDECREF(value);
    Py_XDECREF(type);
    Py_XDECREF(tb);
    return;
}

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t) {
    while (t->p) {
        *t->p = PyString_InternFromString(t->s);
        if (!*t->p)
            return -1;
        ++t;
    }
    return 0;
}

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t) {
    while (t->p) {
        *t->p = PyString_FromStringAndSize(t->s, t->n - 1);
        if (!*t->p)
            return -1;
        ++t;
    }
    return 0;
}

#include "compile.h"
#include "frameobject.h"
#include "traceback.h"

static void __Pyx_AddTraceback(char *funcname) {
    PyObject *py_srcfile = 0;
    PyObject *py_funcname = 0;
    PyObject *py_globals = 0;
    PyObject *empty_tuple = 0;
    PyObject *empty_string = 0;
    PyCodeObject *py_code = 0;
    PyFrameObject *py_frame = 0;
    
    py_srcfile = PyString_FromString(__pyx_filename);
    if (!py_srcfile) goto bad;
    py_funcname = PyString_FromString(funcname);
    if (!py_funcname) goto bad;
    py_globals = PyModule_GetDict(__pyx_m);
    if (!py_globals) goto bad;
    empty_tuple = PyTuple_New(0);
    if (!empty_tuple) goto bad;
    empty_string = PyString_FromString("");
    if (!empty_string) goto bad;
    py_code = PyCode_New(
        0,            /*int argcount,*/
        0,            /*int nlocals,*/
        0,            /*int stacksize,*/
        0,            /*int flags,*/
        empty_string, /*PyObject *code,*/
        empty_tuple,  /*PyObject *consts,*/
        empty_tuple,  /*PyObject *names,*/
        empty_tuple,  /*PyObject *varnames,*/
        empty_tuple,  /*PyObject *freevars,*/
        empty_tuple,  /*PyObject *cellvars,*/
        py_srcfile,   /*PyObject *filename,*/
        py_funcname,  /*PyObject *name,*/
        __pyx_lineno,   /*int firstlineno,*/
        empty_string  /*PyObject *lnotab*/
    );
    if (!py_code) goto bad;
    py_frame = PyFrame_New(
        PyThreadState_Get(), /*PyThreadState *tstate,*/
        py_code,             /*PyCodeObject *code,*/
        py_globals,          /*PyObject *globals,*/
        0                    /*PyObject *locals*/
    );
    if (!py_frame) goto bad;
    py_frame->f_lineno = __pyx_lineno;
    PyTraceBack_Here(py_frame);
bad:
    Py_XDECREF(py_srcfile);
    Py_XDECREF(py_funcname);
    Py_XDECREF(empty_tuple);
    Py_XDECREF(empty_string);
    Py_XDECREF(py_code);
    Py_XDECREF(py_frame);
}
