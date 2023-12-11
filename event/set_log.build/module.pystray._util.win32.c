/* Generated code for Python module 'pystray._util.win32'
 * created by Nuitka version 1.8.5
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_pystray$_util$win32" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pystray$_util$win32;
PyDictObject *moduledict_pystray$_util$win32;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[262];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[262];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pystray._util.win32"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 262; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pystray$_util$win32(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 262; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_7ad8e8a6934ef6906a605a204cd76687;
static PyCodeObject *codeobj_aa276fea3a453d69bf304758f5a891e1;
static PyCodeObject *codeobj_125891da05dfe7d5db624b24af9dc4fe;
static PyCodeObject *codeobj_2191aee6fb65c8bd4c78142e11efed6a;
static PyCodeObject *codeobj_61e6d27b8c5ab10eaf99b670ce4d3fa0;
static PyCodeObject *codeobj_18e10057fecc6924e72f344646c8e5d0;
static PyCodeObject *codeobj_4a85c56c32b6cd7efb1f20717d896954;
static PyCodeObject *codeobj_6f4c777b5023f66ffcf01ea93a02f8b4;
static PyCodeObject *codeobj_144e30f725d3c09980b2ca311da3508d;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[256]); CHECK_OBJECT(module_filename_obj);
    codeobj_7ad8e8a6934ef6906a605a204cd76687 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[257], mod_consts[257], NULL, NULL, 0, 0, 0);
    codeobj_aa276fea3a453d69bf304758f5a891e1 = MAKE_CODE_OBJECT(module_filename_obj, 351, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[254], mod_consts[254], mod_consts[258], NULL, 4, 0, 0);
    codeobj_125891da05dfe7d5db624b24af9dc4fe = MAKE_CODE_OBJECT(module_filename_obj, 146, 0, mod_consts[158], mod_consts[158], mod_consts[259], NULL, 0, 0, 0);
    codeobj_2191aee6fb65c8bd4c78142e11efed6a = MAKE_CODE_OBJECT(module_filename_obj, 122, 0, mod_consts[125], mod_consts[125], mod_consts[259], NULL, 0, 0, 0);
    codeobj_61e6d27b8c5ab10eaf99b670ce4d3fa0 = MAKE_CODE_OBJECT(module_filename_obj, 140, 0, mod_consts[152], mod_consts[152], mod_consts[259], NULL, 0, 0, 0);
    codeobj_18e10057fecc6924e72f344646c8e5d0 = MAKE_CODE_OBJECT(module_filename_obj, 176, 0, mod_consts[186], mod_consts[186], mod_consts[259], NULL, 0, 0, 0);
    codeobj_4a85c56c32b6cd7efb1f20717d896954 = MAKE_CODE_OBJECT(module_filename_obj, 141, 0, mod_consts[154], mod_consts[154], mod_consts[259], NULL, 0, 0, 0);
    codeobj_6f4c777b5023f66ffcf01ea93a02f8b4 = MAKE_CODE_OBJECT(module_filename_obj, 184, 0, mod_consts[190], mod_consts[190], mod_consts[259], NULL, 0, 0, 0);
    codeobj_144e30f725d3c09980b2ca311da3508d = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[204], mod_consts[204], mod_consts[260], NULL, 3, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pystray$_util$win32$$$function__1__err();


static PyObject *MAKE_FUNCTION_pystray$_util$win32$$$function__2_ChangeWindowMessageFilterEx();


// The module function definitions.
static PyObject *impl_pystray$_util$win32$$$function__1__err(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_result = python_pars[0];
    PyObject *par_func = python_pars[1];
    PyObject *par_arguments = python_pars[2];
    struct Nuitka_FrameObject *frame_144e30f725d3c09980b2ca311da3508d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_144e30f725d3c09980b2ca311da3508d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_144e30f725d3c09980b2ca311da3508d)) {
        Py_XDECREF(cache_frame_144e30f725d3c09980b2ca311da3508d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_144e30f725d3c09980b2ca311da3508d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_144e30f725d3c09980b2ca311da3508d = MAKE_FUNCTION_FRAME(tstate, codeobj_144e30f725d3c09980b2ca311da3508d, module_pystray$_util$win32, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_144e30f725d3c09980b2ca311da3508d->m_type_description == NULL);
    frame_144e30f725d3c09980b2ca311da3508d = cache_frame_144e30f725d3c09980b2ca311da3508d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_144e30f725d3c09980b2ca311da3508d);
    assert(Py_REFCNT(frame_144e30f725d3c09980b2ca311da3508d) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_result);
        tmp_operand_value_1 = par_result;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_144e30f725d3c09980b2ca311da3508d->m_frame.f_lineno = 204;
        tmp_raise_type_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[1]);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 204;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    CHECK_OBJECT(par_result);
    tmp_return_value = par_result;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_144e30f725d3c09980b2ca311da3508d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_144e30f725d3c09980b2ca311da3508d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_144e30f725d3c09980b2ca311da3508d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_144e30f725d3c09980b2ca311da3508d,
        type_description_1,
        par_result,
        par_func,
        par_arguments
    );


    // Release cached frame if used for exception.
    if (frame_144e30f725d3c09980b2ca311da3508d == cache_frame_144e30f725d3c09980b2ca311da3508d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_144e30f725d3c09980b2ca311da3508d);
        cache_frame_144e30f725d3c09980b2ca311da3508d = NULL;
    }

    assertFrameObject(frame_144e30f725d3c09980b2ca311da3508d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_result);
    Py_DECREF(par_result);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_arguments);
    Py_DECREF(par_arguments);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_result);
    Py_DECREF(par_result);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_arguments);
    Py_DECREF(par_arguments);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pystray$_util$win32$$$function__1__err() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pystray$_util$win32$$$function__1__err,
        mod_consts[204],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_144e30f725d3c09980b2ca311da3508d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pystray$_util$win32,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pystray$_util$win32$$$function__2_ChangeWindowMessageFilterEx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[254],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aa276fea3a453d69bf304758f5a891e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pystray$_util$win32,
        mod_consts[255],
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_pystray$_util$win32[] = {
    impl_pystray$_util$win32$$$function__1__err,
    NULL,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_pystray$_util$win32;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && HAS_ERROR_OCCURRED(tstate)) {
        return NULL;
    }

    if (offset > sizeof(functable_pystray$_util$win32) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!HAS_ERROR_OCCURRED(tstate));
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_pystray$_util$win32[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_pystray$_util$win32,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pystray$_util$win32(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pystray._util.win32");

    // Store the module for future use.
    module_pystray$_util$win32 = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("pystray._util.win32: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pystray._util.win32: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpystray$_util$win32\n");

    moduledict_pystray$_util$win32 = MODULE_DICT(module_pystray$_util$win32);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pystray$_util$win32,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pystray$_util$win32,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[261]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pystray$_util$win32,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pystray$_util$win32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pystray$_util$win32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pystray$_util$win32);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pystray$_util$win32);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *tmp_NOTIFYICONDATAW$class_creation_1__bases = NULL;
    PyObject *tmp_NOTIFYICONDATAW$class_creation_1__bases_orig = NULL;
    PyObject *tmp_NOTIFYICONDATAW$class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_NOTIFYICONDATAW$class_creation_1__metaclass = NULL;
    PyObject *tmp_NOTIFYICONDATAW$class_creation_1__prepared = NULL;
    PyObject *tmp_NOTIFYICONDATAW$class_creation_2__bases = NULL;
    PyObject *tmp_NOTIFYICONDATAW$class_creation_2__bases_orig = NULL;
    PyObject *tmp_NOTIFYICONDATAW$class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_NOTIFYICONDATAW$class_creation_2__metaclass = NULL;
    PyObject *tmp_NOTIFYICONDATAW$class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    struct Nuitka_FrameObject *frame_7ad8e8a6934ef6906a605a204cd76687;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_pystray$_util$win32$$$class__1_MENUITEMINFO_122 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_2191aee6fb65c8bd4c78142e11efed6a_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_pystray$_util$win32$$$class__2_NOTIFYICONDATAW_140 = NULL;
    struct Nuitka_FrameObject *frame_61e6d27b8c5ab10eaf99b670ce4d3fa0_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *locals_pystray$_util$win32$$$class__3_VERSION_OR_TIMEOUT_141 = NULL;
    struct Nuitka_FrameObject *frame_4a85c56c32b6cd7efb1f20717d896954_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_pystray$_util$win32$$$class__4_GUID_146 = NULL;
    struct Nuitka_FrameObject *frame_125891da05dfe7d5db624b24af9dc4fe_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_pystray$_util$win32$$$class__5_TPMPARAMS_176 = NULL;
    struct Nuitka_FrameObject *frame_18e10057fecc6924e72f344646c8e5d0_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_pystray$_util$win32$$$class__6_WNDCLASSEX_184 = NULL;
    struct Nuitka_FrameObject *frame_6f4c777b5023f66ffcf01ea93a02f8b4_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_2);
    }
    frame_7ad8e8a6934ef6906a605a204cd76687 = MAKE_MODULE_FRAME(codeobj_7ad8e8a6934ef6906a605a204cd76687, module_pystray$_util$win32);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7ad8e8a6934ef6906a605a204cd76687);
    assert(Py_REFCNT(frame_7ad8e8a6934ef6906a605a204cd76687) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[7], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[10]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[11]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        frame_7ad8e8a6934ef6906a605a204cd76687->m_frame.f_lineno = 22;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_add_expr_left_1;
        nuitka_digit tmp_add_expr_right_1;
        tmp_add_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_add_expr_left_1 == NULL)) {
            tmp_add_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        assert(!(tmp_add_expr_left_1 == NULL));
        tmp_add_expr_right_1 = 10;
        tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        assert(!(tmp_assign_source_13 == NULL));
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_add_expr_left_2;
        nuitka_digit tmp_add_expr_right_2;
        tmp_add_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_add_expr_left_2 == NULL)) {
            tmp_add_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        assert(!(tmp_add_expr_left_2 == NULL));
        tmp_add_expr_right_2 = 11;
        tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        assert(!(tmp_assign_source_14 == NULL));
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[46];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[46];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[46];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[46];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[103];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = mod_consts[108];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[111]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_4 == NULL));
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[112]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        frame_7ad8e8a6934ef6906a605a204cd76687->m_frame.f_lineno = 113;
        tmp_assign_source_81 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_expression_value_5 == NULL));
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[111]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_6 == NULL));
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[114]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        frame_7ad8e8a6934ef6906a605a204cd76687->m_frame.f_lineno = 115;
        tmp_assign_source_82 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_expression_value_7 == NULL));
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[116]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_expression_value_8 == NULL));
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[117]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_9 == NULL));
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[118]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_10 == NULL));
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[119]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_11 == NULL));
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[120]);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_12 == NULL));
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[121]);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        frame_7ad8e8a6934ef6906a605a204cd76687->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_83 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_83);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_13;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_expression_value_13 == NULL));
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[123]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_1;
        }
        tmp_assign_source_84 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_84, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_84;
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_85 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_86;
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_14 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[37];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_87 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_87;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_15 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_15, mod_consts[124]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_16 = tmp_class_creation_1__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[124]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[125];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_7ad8e8a6934ef6906a605a204cd76687->m_frame.f_lineno = 122;
        tmp_assign_source_88 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_88;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_17 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts[126]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_name_value_1;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[127];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_18 = tmp_class_creation_1__metaclass;
        tmp_name_value_1 = mod_consts[128];
        tmp_default_value_1 = mod_consts[129];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_18, tmp_name_value_1, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_19;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_19 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_19 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[128]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 122;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_89;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_90;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pystray$_util$win32$$$class__1_MENUITEMINFO_122 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__1_MENUITEMINFO_122, mod_consts[131], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[125];
        tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__1_MENUITEMINFO_122, mod_consts[132], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_3;
        }
        frame_2191aee6fb65c8bd4c78142e11efed6a_2 = MAKE_CLASS_FRAME(tstate, codeobj_2191aee6fb65c8bd4c78142e11efed6a, module_pystray$_util$win32, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_2191aee6fb65c8bd4c78142e11efed6a_2);
        assert(Py_REFCNT(frame_2191aee6fb65c8bd4c78142e11efed6a_2) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_4;
            tmp_tuple_element_4 = mod_consts[133];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_20;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
                tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_20 == NULL)) {
                    tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                assert(!(tmp_expression_value_20 == NULL));
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[119]);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 124;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_list_element_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dictset_value = MAKE_LIST_EMPTY(12);
            {
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_tuple_element_10;
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_tuple_element_13;
                PyObject *tmp_tuple_element_14;
                PyObject *tmp_tuple_element_15;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
                tmp_tuple_element_5 = mod_consts[134];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_21;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
                    tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_21 == NULL)) {
                        tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_21 == NULL));
                    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[119]);
                    if (tmp_tuple_element_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 125;
                        type_description_2 = "o";
                        goto tuple_build_exception_3;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_5);
                }
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_1);
                tmp_tuple_element_6 = mod_consts[135];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_22;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_6);
                    tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_22 == NULL)) {
                        tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_22 == NULL));
                    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[119]);
                    if (tmp_tuple_element_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 126;
                        type_description_2 = "o";
                        goto tuple_build_exception_4;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_6);
                }
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_1);
                tmp_tuple_element_7 = mod_consts[136];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_23;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_7);
                    tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_23 == NULL)) {
                        tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_23 == NULL));
                    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[119]);
                    if (tmp_tuple_element_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 127;
                        type_description_2 = "o";
                        goto tuple_build_exception_5;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_7);
                }
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_1);
                tmp_tuple_element_8 = mod_consts[137];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_24;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_8);
                    tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_24 == NULL)) {
                        tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_24 == NULL));
                    tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[119]);
                    if (tmp_tuple_element_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 128;
                        type_description_2 = "o";
                        goto tuple_build_exception_6;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_8);
                }
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_1);
                tmp_tuple_element_9 = mod_consts[138];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_25;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_9);
                    tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_25 == NULL)) {
                        tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_25 == NULL));
                    tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[139]);
                    if (tmp_tuple_element_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 129;
                        type_description_2 = "o";
                        goto tuple_build_exception_7;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_9);
                }
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_1);
                tmp_tuple_element_10 = mod_consts[140];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_26;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_10);
                    tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_26 == NULL)) {
                        tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_26 == NULL));
                    tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[141]);
                    if (tmp_tuple_element_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 130;
                        type_description_2 = "o";
                        goto tuple_build_exception_8;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_10);
                }
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_1);
                tmp_tuple_element_11 = mod_consts[142];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_27;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_11);
                    tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_27 == NULL)) {
                        tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_27 == NULL));
                    tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[141]);
                    if (tmp_tuple_element_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 131;
                        type_description_2 = "o";
                        goto tuple_build_exception_9;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_11);
                }
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_1);
                tmp_tuple_element_12 = mod_consts[143];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_28;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_12);
                    tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_28 == NULL)) {
                        tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_28 == NULL));
                    tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[144]);
                    if (tmp_tuple_element_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 132;
                        type_description_2 = "o";
                        goto tuple_build_exception_10;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_12);
                }
                goto tuple_build_noexception_10;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_10:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_10:;
                PyList_SET_ITEM(tmp_dictset_value, 8, tmp_list_element_1);
                tmp_tuple_element_13 = mod_consts[145];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_29;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_13);
                    tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_29 == NULL)) {
                        tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_29 == NULL));
                    tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[146]);
                    if (tmp_tuple_element_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 133;
                        type_description_2 = "o";
                        goto tuple_build_exception_11;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_13);
                }
                goto tuple_build_noexception_11;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_11:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_11:;
                PyList_SET_ITEM(tmp_dictset_value, 9, tmp_list_element_1);
                tmp_tuple_element_14 = mod_consts[147];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_30;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_14);
                    tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_30 == NULL)) {
                        tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_30 == NULL));
                    tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[119]);
                    if (tmp_tuple_element_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 134;
                        type_description_2 = "o";
                        goto tuple_build_exception_12;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_14);
                }
                goto tuple_build_noexception_12;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_12:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_12:;
                PyList_SET_ITEM(tmp_dictset_value, 10, tmp_list_element_1);
                tmp_tuple_element_15 = mod_consts[148];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_31;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_15);
                    tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_31 == NULL)) {
                        tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_31 == NULL));
                    tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[141]);
                    if (tmp_tuple_element_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 135;
                        type_description_2 = "o";
                        goto tuple_build_exception_13;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_15);
                }
                goto tuple_build_noexception_13;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_13:;
                PyList_SET_ITEM(tmp_dictset_value, 11, tmp_list_element_1);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__1_MENUITEMINFO_122, mod_consts[149], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2191aee6fb65c8bd4c78142e11efed6a_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2191aee6fb65c8bd4c78142e11efed6a_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2191aee6fb65c8bd4c78142e11efed6a_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2191aee6fb65c8bd4c78142e11efed6a_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_2191aee6fb65c8bd4c78142e11efed6a_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__1_MENUITEMINFO_122, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_91;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_6 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_16 = mod_consts[125];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_16 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_pystray$_util$win32$$$class__1_MENUITEMINFO_122;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_7ad8e8a6934ef6906a605a204cd76687->m_frame.f_lineno = 122;
            tmp_assign_source_91 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_91;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_90 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_90);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_pystray$_util$win32$$$class__1_MENUITEMINFO_122);
        locals_pystray$_util$win32$$$class__1_MENUITEMINFO_122 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pystray$_util$win32$$$class__1_MENUITEMINFO_122);
        locals_pystray$_util$win32$$$class__1_MENUITEMINFO_122 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 122;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_90);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_expression_value_32 == NULL));
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[111]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        frame_7ad8e8a6934ef6906a605a204cd76687->m_frame.f_lineno = 137;
        tmp_assign_source_92 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_92);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_value_33;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_expression_value_33 == NULL));
        tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[123]);
        if (tmp_tuple_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_4;
        }
        tmp_assign_source_93 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_93, 0, tmp_tuple_element_17);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_93;
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_94 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_94;
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_4;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_34 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[37];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_34, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_96 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_96;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_35;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_35 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_35, mod_consts[124]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_4;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_36 = tmp_class_creation_2__metaclass;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[124]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_4;
        }
        tmp_tuple_element_18 = mod_consts[152];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_18 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_7ad8e8a6934ef6906a605a204cd76687->m_frame.f_lineno = 140;
        tmp_assign_source_97 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_97;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_37;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_37 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_37, mod_consts[126]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_4;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_name_value_2;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[127];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_38 = tmp_class_creation_2__metaclass;
        tmp_name_value_2 = mod_consts[128];
        tmp_default_value_2 = mod_consts[129];
        tmp_tuple_element_19 = BUILTIN_GETATTR(tstate, tmp_expression_value_38, tmp_name_value_2, tmp_default_value_2);
        if (tmp_tuple_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_39;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_39 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_39 == NULL));
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[128]);
            Py_DECREF(tmp_expression_value_39);
            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 140;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_98;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_99;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pystray$_util$win32$$$class__2_NOTIFYICONDATAW_140 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__2_NOTIFYICONDATAW_140, mod_consts[131], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[152];
        tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__2_NOTIFYICONDATAW_140, mod_consts[132], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_6;
        }
        frame_61e6d27b8c5ab10eaf99b670ce4d3fa0_3 = MAKE_CLASS_FRAME(tstate, codeobj_61e6d27b8c5ab10eaf99b670ce4d3fa0, module_pystray$_util$win32, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_61e6d27b8c5ab10eaf99b670ce4d3fa0_3);
        assert(Py_REFCNT(frame_61e6d27b8c5ab10eaf99b670ce4d3fa0_3) == 2);

        // Framed code:
        // Tried code:
        {
            PyObject *tmp_assign_source_100;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_expression_value_40;
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
            }

            assert(!(tmp_expression_value_40 == NULL));
            tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[153]);
            if (tmp_tuple_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_assign_source_100 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_100, 0, tmp_tuple_element_20);
            assert(tmp_NOTIFYICONDATAW$class_creation_1__bases_orig == NULL);
            tmp_NOTIFYICONDATAW$class_creation_1__bases_orig = tmp_assign_source_100;
        }
        {
            PyObject *tmp_assign_source_101;
            PyObject *tmp_dircall_arg1_3;
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__bases_orig);
            tmp_dircall_arg1_3 = tmp_NOTIFYICONDATAW$class_creation_1__bases_orig;
            Py_INCREF(tmp_dircall_arg1_3);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
                tmp_assign_source_101 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            assert(tmp_NOTIFYICONDATAW$class_creation_1__bases == NULL);
            tmp_NOTIFYICONDATAW$class_creation_1__bases = tmp_assign_source_101;
        }
        {
            PyObject *tmp_assign_source_102;
            tmp_assign_source_102 = MAKE_DICT_EMPTY();
            assert(tmp_NOTIFYICONDATAW$class_creation_1__class_decl_dict == NULL);
            tmp_NOTIFYICONDATAW$class_creation_1__class_decl_dict = tmp_assign_source_102;
        }
        {
            PyObject *tmp_assign_source_103;
            PyObject *tmp_metaclass_value_3;
            nuitka_bool tmp_condition_result_8;
            int tmp_truth_name_3;
            PyObject *tmp_type_arg_5;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_bases_value_3;
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__bases);
            tmp_truth_name_3 = CHECK_IF_TRUE(tmp_NOTIFYICONDATAW$class_creation_1__bases);
            if (tmp_truth_name_3 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_condition_result_8 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__bases);
            tmp_expression_value_41 = tmp_NOTIFYICONDATAW$class_creation_1__bases;
            tmp_subscript_value_3 = mod_consts[37];
            tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_41, tmp_subscript_value_3, 0);
            if (tmp_type_arg_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
            Py_DECREF(tmp_type_arg_5);
            if (tmp_metaclass_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_3);
            condexpr_end_3:;
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__bases);
            tmp_bases_value_3 = tmp_NOTIFYICONDATAW$class_creation_1__bases;
            tmp_assign_source_103 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
            Py_DECREF(tmp_metaclass_value_3);
            if (tmp_assign_source_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            assert(tmp_NOTIFYICONDATAW$class_creation_1__metaclass == NULL);
            tmp_NOTIFYICONDATAW$class_creation_1__metaclass = tmp_assign_source_103;
        }
        {
            bool tmp_condition_result_9;
            PyObject *tmp_expression_value_42;
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__metaclass);
            tmp_expression_value_42 = tmp_NOTIFYICONDATAW$class_creation_1__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_42, mod_consts[124]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_condition_result_9 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_9 != false) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_104;
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__metaclass);
            tmp_expression_value_43 = tmp_NOTIFYICONDATAW$class_creation_1__metaclass;
            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[124]);
            if (tmp_called_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_tuple_element_21 = mod_consts[154];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__bases);
            tmp_tuple_element_21 = tmp_NOTIFYICONDATAW$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__class_decl_dict);
            tmp_kwargs_value_4 = tmp_NOTIFYICONDATAW$class_creation_1__class_decl_dict;
            frame_61e6d27b8c5ab10eaf99b670ce4d3fa0_3->m_frame.f_lineno = 141;
            tmp_assign_source_104 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            assert(tmp_NOTIFYICONDATAW$class_creation_1__prepared == NULL);
            tmp_NOTIFYICONDATAW$class_creation_1__prepared = tmp_assign_source_104;
        }
        {
            bool tmp_condition_result_10;
            PyObject *tmp_operand_value_3;
            PyObject *tmp_expression_value_44;
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__prepared);
            tmp_expression_value_44 = tmp_NOTIFYICONDATAW$class_creation_1__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts[126]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
            assert(!(tmp_res == -1));
            tmp_condition_result_10 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_10 != false) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        {
            PyObject *tmp_raise_type_3;
            PyObject *tmp_raise_value_3;
            PyObject *tmp_mod_expr_left_3;
            PyObject *tmp_mod_expr_right_3;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_name_value_3;
            PyObject *tmp_default_value_3;
            tmp_raise_type_3 = PyExc_TypeError;
            tmp_mod_expr_left_3 = mod_consts[127];
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__metaclass);
            tmp_expression_value_45 = tmp_NOTIFYICONDATAW$class_creation_1__metaclass;
            tmp_name_value_3 = mod_consts[128];
            tmp_default_value_3 = mod_consts[129];
            tmp_tuple_element_22 = BUILTIN_GETATTR(tstate, tmp_expression_value_45, tmp_name_value_3, tmp_default_value_3);
            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_46;
                PyObject *tmp_type_arg_6;
                PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_22);
                CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__prepared);
                tmp_type_arg_6 = tmp_NOTIFYICONDATAW$class_creation_1__prepared;
                tmp_expression_value_46 = BUILTIN_TYPE1(tmp_type_arg_6);
                assert(!(tmp_expression_value_46 == NULL));
                tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[128]);
                Py_DECREF(tmp_expression_value_46);
                if (tmp_tuple_element_22 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 141;
                    type_description_2 = "o";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_22);
            }
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_mod_expr_right_3);
            goto try_except_handler_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
            Py_DECREF(tmp_mod_expr_right_3);
            if (tmp_raise_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            exception_type = tmp_raise_type_3;
            Py_INCREF(tmp_raise_type_3);
            exception_value = tmp_raise_value_3;
            exception_lineno = 141;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_7;
        }
        branch_no_7:;
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_105;
            tmp_assign_source_105 = MAKE_DICT_EMPTY();
            assert(tmp_NOTIFYICONDATAW$class_creation_1__prepared == NULL);
            tmp_NOTIFYICONDATAW$class_creation_1__prepared = tmp_assign_source_105;
        }
        branch_end_6:;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__prepared);
            tmp_set_locals_3 = tmp_NOTIFYICONDATAW$class_creation_1__prepared;
            locals_pystray$_util$win32$$$class__3_VERSION_OR_TIMEOUT_141 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__3_VERSION_OR_TIMEOUT_141, mod_consts[131], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_2 = "o";
            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[155];
        tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__3_VERSION_OR_TIMEOUT_141, mod_consts[132], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_2 = "o";
            goto try_except_handler_9;
        }
        frame_4a85c56c32b6cd7efb1f20717d896954_4 = MAKE_CLASS_FRAME(tstate, codeobj_4a85c56c32b6cd7efb1f20717d896954, module_pystray$_util$win32, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_4a85c56c32b6cd7efb1f20717d896954_4);
        assert(Py_REFCNT(frame_4a85c56c32b6cd7efb1f20717d896954_4) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_tuple_element_23;
            tmp_tuple_element_23 = mod_consts[156];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_47;
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_23);
                tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_47 == NULL)) {
                    tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                assert(!(tmp_expression_value_47 == NULL));
                tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[119]);
                if (tmp_tuple_element_23 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 143;
                    type_description_3 = "o";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_23);
            }
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_list_element_2);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            tmp_dictset_value = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_24;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_2);
                tmp_tuple_element_24 = mod_consts[157];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_48;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_24);
                    tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_48 == NULL)) {
                        tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_48 == NULL));
                    tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[119]);
                    if (tmp_tuple_element_24 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 144;
                        type_description_3 = "o";
                        goto tuple_build_exception_17;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_24);
                }
                goto tuple_build_noexception_17;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_17:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_17:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_2);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_4;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__3_VERSION_OR_TIMEOUT_141, mod_consts[149], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_3 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4a85c56c32b6cd7efb1f20717d896954_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4a85c56c32b6cd7efb1f20717d896954_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4a85c56c32b6cd7efb1f20717d896954_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4a85c56c32b6cd7efb1f20717d896954_4,
            type_description_3,
            outline_2_var___class__
        );



        assertFrameObject(frame_4a85c56c32b6cd7efb1f20717d896954_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_3:;
        type_description_2 = "o";
        goto try_except_handler_9;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__bases);
            tmp_cmp_expr_left_2 = tmp_NOTIFYICONDATAW$class_creation_1__bases;
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__bases_orig);
            tmp_cmp_expr_right_2 = tmp_NOTIFYICONDATAW$class_creation_1__bases_orig;
            tmp_condition_result_11 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto try_except_handler_9;
            }
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__bases_orig);
        tmp_dictset_value = tmp_NOTIFYICONDATAW$class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__3_VERSION_OR_TIMEOUT_141, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_2 = "o";
            goto try_except_handler_9;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_106;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_kwargs_value_5;
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__metaclass);
            tmp_called_value_10 = tmp_NOTIFYICONDATAW$class_creation_1__metaclass;
            tmp_tuple_element_25 = mod_consts[154];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__bases);
            tmp_tuple_element_25 = tmp_NOTIFYICONDATAW$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_25);
            tmp_tuple_element_25 = locals_pystray$_util$win32$$$class__3_VERSION_OR_TIMEOUT_141;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__class_decl_dict);
            tmp_kwargs_value_5 = tmp_NOTIFYICONDATAW$class_creation_1__class_decl_dict;
            frame_61e6d27b8c5ab10eaf99b670ce4d3fa0_3->m_frame.f_lineno = 141;
            tmp_assign_source_106 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_106 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_106;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_dictset_value = outline_2_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_pystray$_util$win32$$$class__3_VERSION_OR_TIMEOUT_141);
        locals_pystray$_util$win32$$$class__3_VERSION_OR_TIMEOUT_141 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pystray$_util$win32$$$class__3_VERSION_OR_TIMEOUT_141);
        locals_pystray$_util$win32$$$class__3_VERSION_OR_TIMEOUT_141 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 141;
        goto try_except_handler_7;
        outline_result_3:;
        tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__2_NOTIFYICONDATAW_140, mod_consts[154], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_2 = "o";
            goto try_except_handler_7;
        }
        goto try_end_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_NOTIFYICONDATAW$class_creation_1__bases_orig);
        tmp_NOTIFYICONDATAW$class_creation_1__bases_orig = NULL;
        Py_XDECREF(tmp_NOTIFYICONDATAW$class_creation_1__bases);
        tmp_NOTIFYICONDATAW$class_creation_1__bases = NULL;
        Py_XDECREF(tmp_NOTIFYICONDATAW$class_creation_1__class_decl_dict);
        tmp_NOTIFYICONDATAW$class_creation_1__class_decl_dict = NULL;
        Py_XDECREF(tmp_NOTIFYICONDATAW$class_creation_1__metaclass);
        tmp_NOTIFYICONDATAW$class_creation_1__metaclass = NULL;
        Py_XDECREF(tmp_NOTIFYICONDATAW$class_creation_1__prepared);
        tmp_NOTIFYICONDATAW$class_creation_1__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_3;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__bases_orig);
        Py_DECREF(tmp_NOTIFYICONDATAW$class_creation_1__bases_orig);
        tmp_NOTIFYICONDATAW$class_creation_1__bases_orig = NULL;
        CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__bases);
        Py_DECREF(tmp_NOTIFYICONDATAW$class_creation_1__bases);
        tmp_NOTIFYICONDATAW$class_creation_1__bases = NULL;
        CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__class_decl_dict);
        Py_DECREF(tmp_NOTIFYICONDATAW$class_creation_1__class_decl_dict);
        tmp_NOTIFYICONDATAW$class_creation_1__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__metaclass);
        Py_DECREF(tmp_NOTIFYICONDATAW$class_creation_1__metaclass);
        tmp_NOTIFYICONDATAW$class_creation_1__metaclass = NULL;
        CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_1__prepared);
        Py_DECREF(tmp_NOTIFYICONDATAW$class_creation_1__prepared);
        tmp_NOTIFYICONDATAW$class_creation_1__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_107;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_expression_value_49;
            tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_49 == NULL)) {
                tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
            }

            assert(!(tmp_expression_value_49 == NULL));
            tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[123]);
            if (tmp_tuple_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_assign_source_107 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_107, 0, tmp_tuple_element_26);
            assert(tmp_NOTIFYICONDATAW$class_creation_2__bases_orig == NULL);
            tmp_NOTIFYICONDATAW$class_creation_2__bases_orig = tmp_assign_source_107;
        }
        {
            PyObject *tmp_assign_source_108;
            PyObject *tmp_dircall_arg1_4;
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__bases_orig);
            tmp_dircall_arg1_4 = tmp_NOTIFYICONDATAW$class_creation_2__bases_orig;
            Py_INCREF(tmp_dircall_arg1_4);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
                tmp_assign_source_108 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_108 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            assert(tmp_NOTIFYICONDATAW$class_creation_2__bases == NULL);
            tmp_NOTIFYICONDATAW$class_creation_2__bases = tmp_assign_source_108;
        }
        {
            PyObject *tmp_assign_source_109;
            tmp_assign_source_109 = MAKE_DICT_EMPTY();
            assert(tmp_NOTIFYICONDATAW$class_creation_2__class_decl_dict == NULL);
            tmp_NOTIFYICONDATAW$class_creation_2__class_decl_dict = tmp_assign_source_109;
        }
        {
            PyObject *tmp_assign_source_110;
            PyObject *tmp_metaclass_value_4;
            nuitka_bool tmp_condition_result_12;
            int tmp_truth_name_4;
            PyObject *tmp_type_arg_7;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_bases_value_4;
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__bases);
            tmp_truth_name_4 = CHECK_IF_TRUE(tmp_NOTIFYICONDATAW$class_creation_2__bases);
            if (tmp_truth_name_4 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_condition_result_12 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__bases);
            tmp_expression_value_50 = tmp_NOTIFYICONDATAW$class_creation_2__bases;
            tmp_subscript_value_4 = mod_consts[37];
            tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_50, tmp_subscript_value_4, 0);
            if (tmp_type_arg_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
            Py_DECREF(tmp_type_arg_7);
            if (tmp_metaclass_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_4);
            condexpr_end_4:;
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__bases);
            tmp_bases_value_4 = tmp_NOTIFYICONDATAW$class_creation_2__bases;
            tmp_assign_source_110 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
            Py_DECREF(tmp_metaclass_value_4);
            if (tmp_assign_source_110 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            assert(tmp_NOTIFYICONDATAW$class_creation_2__metaclass == NULL);
            tmp_NOTIFYICONDATAW$class_creation_2__metaclass = tmp_assign_source_110;
        }
        {
            bool tmp_condition_result_13;
            PyObject *tmp_expression_value_51;
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__metaclass);
            tmp_expression_value_51 = tmp_NOTIFYICONDATAW$class_creation_2__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_51, mod_consts[124]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_condition_result_13 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_13 != false) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        {
            PyObject *tmp_assign_source_111;
            PyObject *tmp_called_value_11;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__metaclass);
            tmp_expression_value_52 = tmp_NOTIFYICONDATAW$class_creation_2__metaclass;
            tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[124]);
            if (tmp_called_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_tuple_element_27 = mod_consts[158];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__bases);
            tmp_tuple_element_27 = tmp_NOTIFYICONDATAW$class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__class_decl_dict);
            tmp_kwargs_value_6 = tmp_NOTIFYICONDATAW$class_creation_2__class_decl_dict;
            frame_61e6d27b8c5ab10eaf99b670ce4d3fa0_3->m_frame.f_lineno = 146;
            tmp_assign_source_111 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            assert(tmp_NOTIFYICONDATAW$class_creation_2__prepared == NULL);
            tmp_NOTIFYICONDATAW$class_creation_2__prepared = tmp_assign_source_111;
        }
        {
            bool tmp_condition_result_14;
            PyObject *tmp_operand_value_4;
            PyObject *tmp_expression_value_53;
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__prepared);
            tmp_expression_value_53 = tmp_NOTIFYICONDATAW$class_creation_2__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_53, mod_consts[126]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
            assert(!(tmp_res == -1));
            tmp_condition_result_14 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_14 != false) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        {
            PyObject *tmp_raise_type_4;
            PyObject *tmp_raise_value_4;
            PyObject *tmp_mod_expr_left_4;
            PyObject *tmp_mod_expr_right_4;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_name_value_4;
            PyObject *tmp_default_value_4;
            tmp_raise_type_4 = PyExc_TypeError;
            tmp_mod_expr_left_4 = mod_consts[127];
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__metaclass);
            tmp_expression_value_54 = tmp_NOTIFYICONDATAW$class_creation_2__metaclass;
            tmp_name_value_4 = mod_consts[128];
            tmp_default_value_4 = mod_consts[129];
            tmp_tuple_element_28 = BUILTIN_GETATTR(tstate, tmp_expression_value_54, tmp_name_value_4, tmp_default_value_4);
            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_55;
                PyObject *tmp_type_arg_8;
                PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_28);
                CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__prepared);
                tmp_type_arg_8 = tmp_NOTIFYICONDATAW$class_creation_2__prepared;
                tmp_expression_value_55 = BUILTIN_TYPE1(tmp_type_arg_8);
                assert(!(tmp_expression_value_55 == NULL));
                tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[128]);
                Py_DECREF(tmp_expression_value_55);
                if (tmp_tuple_element_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 146;
                    type_description_2 = "o";
                    goto tuple_build_exception_18;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_28);
            }
            goto tuple_build_noexception_18;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_18:;
            Py_DECREF(tmp_mod_expr_right_4);
            goto try_except_handler_10;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_18:;
            tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
            Py_DECREF(tmp_mod_expr_right_4);
            if (tmp_raise_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            exception_type = tmp_raise_type_4;
            Py_INCREF(tmp_raise_type_4);
            exception_value = tmp_raise_value_4;
            exception_lineno = 146;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_10;
        }
        branch_no_10:;
        goto branch_end_9;
        branch_no_9:;
        {
            PyObject *tmp_assign_source_112;
            tmp_assign_source_112 = MAKE_DICT_EMPTY();
            assert(tmp_NOTIFYICONDATAW$class_creation_2__prepared == NULL);
            tmp_NOTIFYICONDATAW$class_creation_2__prepared = tmp_assign_source_112;
        }
        branch_end_9:;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__prepared);
            tmp_set_locals_4 = tmp_NOTIFYICONDATAW$class_creation_2__prepared;
            locals_pystray$_util$win32$$$class__4_GUID_146 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__4_GUID_146, mod_consts[131], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_2 = "o";
            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[159];
        tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__4_GUID_146, mod_consts[132], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_2 = "o";
            goto try_except_handler_12;
        }
        frame_125891da05dfe7d5db624b24af9dc4fe_5 = MAKE_CLASS_FRAME(tstate, codeobj_125891da05dfe7d5db624b24af9dc4fe, module_pystray$_util$win32, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_125891da05dfe7d5db624b24af9dc4fe_5);
        assert(Py_REFCNT(frame_125891da05dfe7d5db624b24af9dc4fe_5) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_tuple_element_29;
            tmp_tuple_element_29 = mod_consts[160];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_56;
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_29);
                tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_56 == NULL)) {
                    tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                assert(!(tmp_expression_value_56 == NULL));
                tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[161]);
                if (tmp_tuple_element_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 148;
                    type_description_3 = "o";
                    goto tuple_build_exception_19;
                }
                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_29);
            }
            goto tuple_build_noexception_19;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_list_element_3);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_19:;
            tmp_dictset_value = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_tuple_element_30;
                PyObject *tmp_tuple_element_31;
                PyObject *tmp_tuple_element_32;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_3);
                tmp_tuple_element_30 = mod_consts[162];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_57;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_30);
                    tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_57 == NULL)) {
                        tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_57 == NULL));
                    tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[163]);
                    if (tmp_tuple_element_30 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 149;
                        type_description_3 = "o";
                        goto tuple_build_exception_20;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_30);
                }
                goto tuple_build_noexception_20;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_20:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_20:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_3);
                tmp_tuple_element_31 = mod_consts[164];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_58;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_31);
                    tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_58 == NULL)) {
                        tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_58 == NULL));
                    tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[163]);
                    if (tmp_tuple_element_31 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 150;
                        type_description_3 = "o";
                        goto tuple_build_exception_21;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_31);
                }
                goto tuple_build_noexception_21;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_21:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_21:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_3);
                tmp_tuple_element_32 = mod_consts[165];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_mult_expr_left_1;
                    PyObject *tmp_mult_expr_right_1;
                    PyObject *tmp_expression_value_59;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_32);
                    tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_59 == NULL)) {
                        tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_59 == NULL));
                    tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[166]);
                    if (tmp_mult_expr_left_1 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 151;
                        type_description_3 = "o";
                        goto tuple_build_exception_22;
                    }
                    tmp_mult_expr_right_1 = mod_consts[31];
                    tmp_tuple_element_32 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
                    Py_DECREF(tmp_mult_expr_left_1);
                    if (tmp_tuple_element_32 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 151;
                        type_description_3 = "o";
                        goto tuple_build_exception_22;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_32);
                }
                goto tuple_build_noexception_22;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_22:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_22:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_3);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_5;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__4_GUID_146, mod_consts[149], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_3 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_125891da05dfe7d5db624b24af9dc4fe_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_125891da05dfe7d5db624b24af9dc4fe_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_125891da05dfe7d5db624b24af9dc4fe_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_125891da05dfe7d5db624b24af9dc4fe_5,
            type_description_3,
            outline_3_var___class__
        );



        assertFrameObject(frame_125891da05dfe7d5db624b24af9dc4fe_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_4:;
        type_description_2 = "o";
        goto try_except_handler_12;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__bases);
            tmp_cmp_expr_left_3 = tmp_NOTIFYICONDATAW$class_creation_2__bases;
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__bases_orig);
            tmp_cmp_expr_right_3 = tmp_NOTIFYICONDATAW$class_creation_2__bases_orig;
            tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
        }
        branch_yes_11:;
        CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__bases_orig);
        tmp_dictset_value = tmp_NOTIFYICONDATAW$class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__4_GUID_146, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_2 = "o";
            goto try_except_handler_12;
        }
        branch_no_11:;
        {
            PyObject *tmp_assign_source_113;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_33;
            PyObject *tmp_kwargs_value_7;
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__metaclass);
            tmp_called_value_12 = tmp_NOTIFYICONDATAW$class_creation_2__metaclass;
            tmp_tuple_element_33 = mod_consts[158];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__bases);
            tmp_tuple_element_33 = tmp_NOTIFYICONDATAW$class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_33);
            tmp_tuple_element_33 = locals_pystray$_util$win32$$$class__4_GUID_146;
            PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__class_decl_dict);
            tmp_kwargs_value_7 = tmp_NOTIFYICONDATAW$class_creation_2__class_decl_dict;
            frame_61e6d27b8c5ab10eaf99b670ce4d3fa0_3->m_frame.f_lineno = 146;
            tmp_assign_source_113 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_args_value_7);
            if (tmp_assign_source_113 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_113;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_dictset_value = outline_3_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_pystray$_util$win32$$$class__4_GUID_146);
        locals_pystray$_util$win32$$$class__4_GUID_146 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pystray$_util$win32$$$class__4_GUID_146);
        locals_pystray$_util$win32$$$class__4_GUID_146 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 146;
        goto try_except_handler_10;
        outline_result_4:;
        tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__2_NOTIFYICONDATAW_140, mod_consts[158], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_2 = "o";
            goto try_except_handler_10;
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_NOTIFYICONDATAW$class_creation_2__bases_orig);
        tmp_NOTIFYICONDATAW$class_creation_2__bases_orig = NULL;
        Py_XDECREF(tmp_NOTIFYICONDATAW$class_creation_2__bases);
        tmp_NOTIFYICONDATAW$class_creation_2__bases = NULL;
        Py_XDECREF(tmp_NOTIFYICONDATAW$class_creation_2__class_decl_dict);
        tmp_NOTIFYICONDATAW$class_creation_2__class_decl_dict = NULL;
        Py_XDECREF(tmp_NOTIFYICONDATAW$class_creation_2__metaclass);
        tmp_NOTIFYICONDATAW$class_creation_2__metaclass = NULL;
        Py_XDECREF(tmp_NOTIFYICONDATAW$class_creation_2__prepared);
        tmp_NOTIFYICONDATAW$class_creation_2__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_3;
        // End of try:
        try_end_3:;
        CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__bases_orig);
        Py_DECREF(tmp_NOTIFYICONDATAW$class_creation_2__bases_orig);
        tmp_NOTIFYICONDATAW$class_creation_2__bases_orig = NULL;
        CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__bases);
        Py_DECREF(tmp_NOTIFYICONDATAW$class_creation_2__bases);
        tmp_NOTIFYICONDATAW$class_creation_2__bases = NULL;
        CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__class_decl_dict);
        Py_DECREF(tmp_NOTIFYICONDATAW$class_creation_2__class_decl_dict);
        tmp_NOTIFYICONDATAW$class_creation_2__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__metaclass);
        Py_DECREF(tmp_NOTIFYICONDATAW$class_creation_2__metaclass);
        tmp_NOTIFYICONDATAW$class_creation_2__metaclass = NULL;
        CHECK_OBJECT(tmp_NOTIFYICONDATAW$class_creation_2__prepared);
        Py_DECREF(tmp_NOTIFYICONDATAW$class_creation_2__prepared);
        tmp_NOTIFYICONDATAW$class_creation_2__prepared = NULL;
        {
            PyObject *tmp_list_element_4;
            PyObject *tmp_tuple_element_34;
            tmp_tuple_element_34 = mod_consts[133];
            tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_60;
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_34);
                tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_60 == NULL)) {
                    tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                assert(!(tmp_expression_value_60 == NULL));
                tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[167]);
                if (tmp_tuple_element_34 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 154;
                    type_description_2 = "o";
                    goto tuple_build_exception_23;
                }
                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_34);
            }
            goto tuple_build_noexception_23;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_23:;
            Py_DECREF(tmp_list_element_4);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_23:;
            tmp_dictset_value = MAKE_LIST_EMPTY(15);
            {
                PyObject *tmp_tuple_element_35;
                PyObject *tmp_tuple_element_36;
                PyObject *tmp_tuple_element_37;
                PyObject *tmp_tuple_element_38;
                PyObject *tmp_tuple_element_39;
                PyObject *tmp_tuple_element_40;
                PyObject *tmp_tuple_element_41;
                PyObject *tmp_tuple_element_42;
                PyObject *tmp_tuple_element_43;
                PyObject *tmp_tuple_element_44;
                PyObject *tmp_tuple_element_45;
                PyObject *tmp_tuple_element_46;
                PyObject *tmp_tuple_element_47;
                PyObject *tmp_tuple_element_48;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_4);
                tmp_tuple_element_35 = mod_consts[168];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_61;
                    PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_35);
                    tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_61 == NULL)) {
                        tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_61 == NULL));
                    tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[118]);
                    if (tmp_tuple_element_35 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 155;
                        type_description_2 = "o";
                        goto tuple_build_exception_24;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_35);
                }
                goto tuple_build_noexception_24;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_24:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_24:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_4);
                tmp_tuple_element_36 = mod_consts[169];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_62;
                    PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_36);
                    tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_62 == NULL)) {
                        tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_62 == NULL));
                    tmp_tuple_element_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[119]);
                    if (tmp_tuple_element_36 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 156;
                        type_description_2 = "o";
                        goto tuple_build_exception_25;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_36);
                }
                goto tuple_build_noexception_25;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_25:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_25:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_4);
                tmp_tuple_element_37 = mod_consts[170];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_63;
                    PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_37);
                    tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_63 == NULL)) {
                        tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_63 == NULL));
                    tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[119]);
                    if (tmp_tuple_element_37 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 157;
                        type_description_2 = "o";
                        goto tuple_build_exception_26;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_37);
                }
                goto tuple_build_noexception_26;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_26:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_26:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_4);
                tmp_tuple_element_38 = mod_consts[171];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_64;
                    PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_38);
                    tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_64 == NULL)) {
                        tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_64 == NULL));
                    tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[119]);
                    if (tmp_tuple_element_38 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 158;
                        type_description_2 = "o";
                        goto tuple_build_exception_27;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_38);
                }
                goto tuple_build_noexception_27;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_27:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_27:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_4);
                tmp_tuple_element_39 = mod_consts[172];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_65;
                    PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_39);
                    tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_65 == NULL)) {
                        tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_65 == NULL));
                    tmp_tuple_element_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[173]);
                    if (tmp_tuple_element_39 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 159;
                        type_description_2 = "o";
                        goto tuple_build_exception_28;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_39);
                }
                goto tuple_build_noexception_28;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_28:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_28:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_4);
                tmp_tuple_element_40 = mod_consts[174];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_mult_expr_left_2;
                    PyObject *tmp_mult_expr_right_2;
                    PyObject *tmp_expression_value_66;
                    PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_40);
                    tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_66 == NULL)) {
                        tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_66 == NULL));
                    tmp_mult_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[175]);
                    if (tmp_mult_expr_left_2 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 160;
                        type_description_2 = "o";
                        goto tuple_build_exception_29;
                    }
                    tmp_mult_expr_right_2 = mod_consts[40];
                    tmp_tuple_element_40 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
                    Py_DECREF(tmp_mult_expr_left_2);
                    if (tmp_tuple_element_40 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 160;
                        type_description_2 = "o";
                        goto tuple_build_exception_29;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_40);
                }
                goto tuple_build_noexception_29;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_29:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_29:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_4);
                tmp_tuple_element_41 = mod_consts[176];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_67;
                    PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_41);
                    tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_67 == NULL)) {
                        tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_67 == NULL));
                    tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[167]);
                    if (tmp_tuple_element_41 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 161;
                        type_description_2 = "o";
                        goto tuple_build_exception_30;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_41);
                }
                goto tuple_build_noexception_30;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_30:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_30:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_4);
                tmp_tuple_element_42 = mod_consts[177];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_68;
                    PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_42);
                    tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_68 == NULL)) {
                        tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_68 == NULL));
                    tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[167]);
                    if (tmp_tuple_element_42 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 162;
                        type_description_2 = "o";
                        goto tuple_build_exception_31;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_42);
                }
                goto tuple_build_noexception_31;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_31:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_31:;
                PyList_SET_ITEM(tmp_dictset_value, 8, tmp_list_element_4);
                tmp_tuple_element_43 = mod_consts[178];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_mult_expr_left_3;
                    PyObject *tmp_mult_expr_right_3;
                    PyObject *tmp_expression_value_69;
                    PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_43);
                    tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_69 == NULL)) {
                        tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_69 == NULL));
                    tmp_mult_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[175]);
                    if (tmp_mult_expr_left_3 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 163;
                        type_description_2 = "o";
                        goto tuple_build_exception_32;
                    }
                    tmp_mult_expr_right_3 = mod_consts[49];
                    tmp_tuple_element_43 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
                    Py_DECREF(tmp_mult_expr_left_3);
                    if (tmp_tuple_element_43 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 163;
                        type_description_2 = "o";
                        goto tuple_build_exception_32;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_43);
                }
                goto tuple_build_noexception_32;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_32:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_32:;
                PyList_SET_ITEM(tmp_dictset_value, 9, tmp_list_element_4);
                tmp_tuple_element_44 = mod_consts[179];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_44);
                tmp_tuple_element_44 = PyObject_GetItem(locals_pystray$_util$win32$$$class__2_NOTIFYICONDATAW_140, mod_consts[154]);

                if (unlikely(tmp_tuple_element_44 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[154]);
                    NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(tstate, exception_value);

                    exception_lineno = 164;
                    type_description_2 = "o";
                    goto list_build_exception_4;
                }

                if (tmp_tuple_element_44 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 164;
                    type_description_2 = "o";
                    goto list_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_44);
                PyList_SET_ITEM(tmp_dictset_value, 10, tmp_list_element_4);
                tmp_tuple_element_45 = mod_consts[180];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_mult_expr_left_4;
                    PyObject *tmp_mult_expr_right_4;
                    PyObject *tmp_expression_value_70;
                    PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_45);
                    tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_70 == NULL)) {
                        tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_70 == NULL));
                    tmp_mult_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[175]);
                    if (tmp_mult_expr_left_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 165;
                        type_description_2 = "o";
                        goto tuple_build_exception_33;
                    }
                    tmp_mult_expr_right_4 = mod_consts[27];
                    tmp_tuple_element_45 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
                    Py_DECREF(tmp_mult_expr_left_4);
                    if (tmp_tuple_element_45 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 165;
                        type_description_2 = "o";
                        goto tuple_build_exception_33;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_45);
                }
                goto tuple_build_noexception_33;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_33:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_33:;
                PyList_SET_ITEM(tmp_dictset_value, 11, tmp_list_element_4);
                tmp_tuple_element_46 = mod_consts[181];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_71;
                    PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_46);
                    tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_71 == NULL)) {
                        tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_71 == NULL));
                    tmp_tuple_element_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[167]);
                    if (tmp_tuple_element_46 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 166;
                        type_description_2 = "o";
                        goto tuple_build_exception_34;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_46);
                }
                goto tuple_build_noexception_34;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_34:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_34:;
                PyList_SET_ITEM(tmp_dictset_value, 12, tmp_list_element_4);
                tmp_tuple_element_47 = mod_consts[182];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_47);
                tmp_tuple_element_47 = PyObject_GetItem(locals_pystray$_util$win32$$$class__2_NOTIFYICONDATAW_140, mod_consts[158]);

                if (unlikely(tmp_tuple_element_47 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[158]);
                    NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(tstate, exception_value);

                    exception_lineno = 167;
                    type_description_2 = "o";
                    goto list_build_exception_4;
                }

                if (tmp_tuple_element_47 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 167;
                    type_description_2 = "o";
                    goto list_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_47);
                PyList_SET_ITEM(tmp_dictset_value, 13, tmp_list_element_4);
                tmp_tuple_element_48 = mod_consts[183];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_72;
                    PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_48);
                    tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_72 == NULL)) {
                        tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_72 == NULL));
                    tmp_tuple_element_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[173]);
                    if (tmp_tuple_element_48 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 168;
                        type_description_2 = "o";
                        goto tuple_build_exception_35;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_48);
                }
                goto tuple_build_noexception_35;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_35:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_35:;
                PyList_SET_ITEM(tmp_dictset_value, 14, tmp_list_element_4);
            }
            goto list_build_noexception_4;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for list_build:
            list_build_noexception_4:;
            tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__2_NOTIFYICONDATAW_140, mod_consts[149], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_LIST1(mod_consts[179]);
        tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__2_NOTIFYICONDATAW_140, mod_consts[184], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_61e6d27b8c5ab10eaf99b670ce4d3fa0_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_61e6d27b8c5ab10eaf99b670ce4d3fa0_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_61e6d27b8c5ab10eaf99b670ce4d3fa0_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_61e6d27b8c5ab10eaf99b670ce4d3fa0_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_61e6d27b8c5ab10eaf99b670ce4d3fa0_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__2_NOTIFYICONDATAW_140, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_6;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_114;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_49;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_13 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_49 = mod_consts[152];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_49);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_49 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_49);
            tmp_tuple_element_49 = locals_pystray$_util$win32$$$class__2_NOTIFYICONDATAW_140;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_49);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_2__class_decl_dict;
            frame_7ad8e8a6934ef6906a605a204cd76687->m_frame.f_lineno = 140;
            tmp_assign_source_114 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_114 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_114;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_99 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_99);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_pystray$_util$win32$$$class__2_NOTIFYICONDATAW_140);
        locals_pystray$_util$win32$$$class__2_NOTIFYICONDATAW_140 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pystray$_util$win32$$$class__2_NOTIFYICONDATAW_140);
        locals_pystray$_util$win32$$$class__2_NOTIFYICONDATAW_140 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 140;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_99);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_expression_value_73 == NULL));
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[111]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        frame_7ad8e8a6934ef6906a605a204cd76687->m_frame.f_lineno = 173;
        tmp_assign_source_115 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_14);
        if (tmp_assign_source_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_115);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_tuple_element_50;
        PyObject *tmp_expression_value_74;
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_expression_value_74 == NULL));
        tmp_tuple_element_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[123]);
        if (tmp_tuple_element_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_13;
        }
        tmp_assign_source_116 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_116, 0, tmp_tuple_element_50);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_116;
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_117 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_117;
    }
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_118;
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_13;
        }
        tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_75 = tmp_class_creation_3__bases;
        tmp_subscript_value_5 = mod_consts[37];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_75, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_13;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_5 = tmp_class_creation_3__bases;
        tmp_assign_source_119 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_119;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_expression_value_76;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_76 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_76, mod_consts[124]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_13;
        }
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_51;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_77 = tmp_class_creation_3__metaclass;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[124]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_13;
        }
        tmp_tuple_element_51 = mod_consts[186];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_51);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_51 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_51);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_3__class_decl_dict;
        frame_7ad8e8a6934ef6906a605a204cd76687->m_frame.f_lineno = 176;
        tmp_assign_source_120 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_120;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_78;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_78 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_78, mod_consts[126]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_13;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_52;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[127];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_79 = tmp_class_creation_3__metaclass;
        tmp_name_value_5 = mod_consts[128];
        tmp_default_value_5 = mod_consts[129];
        tmp_tuple_element_52 = BUILTIN_GETATTR(tstate, tmp_expression_value_79, tmp_name_value_5, tmp_default_value_5);
        if (tmp_tuple_element_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_80;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_52);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_10 = tmp_class_creation_3__prepared;
            tmp_expression_value_80 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_80 == NULL));
            tmp_tuple_element_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[128]);
            Py_DECREF(tmp_expression_value_80);
            if (tmp_tuple_element_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto tuple_build_exception_36;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_52);
        }
        goto tuple_build_noexception_36;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_36:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_36:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 176;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_121;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_122;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_5 = tmp_class_creation_3__prepared;
            locals_pystray$_util$win32$$$class__5_TPMPARAMS_176 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__5_TPMPARAMS_176, mod_consts[131], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[186];
        tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__5_TPMPARAMS_176, mod_consts[132], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_15;
        }
        frame_18e10057fecc6924e72f344646c8e5d0_6 = MAKE_CLASS_FRAME(tstate, codeobj_18e10057fecc6924e72f344646c8e5d0, module_pystray$_util$win32, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_18e10057fecc6924e72f344646c8e5d0_6);
        assert(Py_REFCNT(frame_18e10057fecc6924e72f344646c8e5d0_6) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_5;
            PyObject *tmp_tuple_element_53;
            tmp_tuple_element_53 = mod_consts[133];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_81;
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_53);
                tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_81 == NULL)) {
                    tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                assert(!(tmp_expression_value_81 == NULL));
                tmp_tuple_element_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[119]);
                if (tmp_tuple_element_53 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 178;
                    type_description_2 = "o";
                    goto tuple_build_exception_37;
                }
                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_53);
            }
            goto tuple_build_noexception_37;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_37:;
            Py_DECREF(tmp_list_element_5);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_37:;
            tmp_dictset_value = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_54;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_5);
                tmp_tuple_element_54 = mod_consts[187];
                tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_82;
                    PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_54);
                    tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_82 == NULL)) {
                        tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_82 == NULL));
                    tmp_tuple_element_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[188]);
                    if (tmp_tuple_element_54 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 179;
                        type_description_2 = "o";
                        goto tuple_build_exception_38;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_54);
                }
                goto tuple_build_noexception_38;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_38:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_38:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_5);
            }
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_5:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_6;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__5_TPMPARAMS_176, mod_consts[149], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_18e10057fecc6924e72f344646c8e5d0_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_18e10057fecc6924e72f344646c8e5d0_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_18e10057fecc6924e72f344646c8e5d0_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_18e10057fecc6924e72f344646c8e5d0_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_18e10057fecc6924e72f344646c8e5d0_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_15;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__5_TPMPARAMS_176, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_15;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_123;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_55;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_16 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_55 = mod_consts[186];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_55 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_55);
            tmp_tuple_element_55 = locals_pystray$_util$win32$$$class__5_TPMPARAMS_176;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_3__class_decl_dict;
            frame_7ad8e8a6934ef6906a605a204cd76687->m_frame.f_lineno = 176;
            tmp_assign_source_123 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_123 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_123;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_122 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_122);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_pystray$_util$win32$$$class__5_TPMPARAMS_176);
        locals_pystray$_util$win32$$$class__5_TPMPARAMS_176 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pystray$_util$win32$$$class__5_TPMPARAMS_176);
        locals_pystray$_util$win32$$$class__5_TPMPARAMS_176 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 176;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_122);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_args_element_value_11;
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_expression_value_83 == NULL));
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[111]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_args_element_value_11 == NULL)) {
            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[186]);
        }

        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        frame_7ad8e8a6934ef6906a605a204cd76687->m_frame.f_lineno = 181;
        tmp_assign_source_124 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_17);
        if (tmp_assign_source_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_124);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_tuple_element_56;
        PyObject *tmp_expression_value_84;
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_expression_value_84 == NULL));
        tmp_tuple_element_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[123]);
        if (tmp_tuple_element_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_16;
        }
        tmp_assign_source_125 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_125, 0, tmp_tuple_element_56);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_125;
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_126 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_126;
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_127;
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_16;
        }
        tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_85 = tmp_class_creation_4__bases;
        tmp_subscript_value_6 = mod_consts[37];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_85, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_16;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_16;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_6 = tmp_class_creation_4__bases;
        tmp_assign_source_128 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_128;
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_expression_value_86;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_86 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_86, mod_consts[124]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_16;
        }
        tmp_condition_result_22 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_57;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_87 = tmp_class_creation_4__metaclass;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[124]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_16;
        }
        tmp_tuple_element_57 = mod_consts[190];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_57);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_57 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_57);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_4__class_decl_dict;
        frame_7ad8e8a6934ef6906a605a204cd76687->m_frame.f_lineno = 184;
        tmp_assign_source_129 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_129;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_88;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_88 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_88, mod_consts[126]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_16;
        }
        tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_58;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[127];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_89 = tmp_class_creation_4__metaclass;
        tmp_name_value_6 = mod_consts[128];
        tmp_default_value_6 = mod_consts[129];
        tmp_tuple_element_58 = BUILTIN_GETATTR(tstate, tmp_expression_value_89, tmp_name_value_6, tmp_default_value_6);
        if (tmp_tuple_element_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_16;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_90;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_58);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_12 = tmp_class_creation_4__prepared;
            tmp_expression_value_90 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_90 == NULL));
            tmp_tuple_element_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[128]);
            Py_DECREF(tmp_expression_value_90);
            if (tmp_tuple_element_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto tuple_build_exception_39;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_58);
        }
        goto tuple_build_noexception_39;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_39:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_39:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 184;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_130;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_131;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_6 = tmp_class_creation_4__prepared;
            locals_pystray$_util$win32$$$class__6_WNDCLASSEX_184 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__6_WNDCLASSEX_184, mod_consts[131], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[190];
        tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__6_WNDCLASSEX_184, mod_consts[132], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_18;
        }
        frame_6f4c777b5023f66ffcf01ea93a02f8b4_7 = MAKE_CLASS_FRAME(tstate, codeobj_6f4c777b5023f66ffcf01ea93a02f8b4, module_pystray$_util$win32, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_6f4c777b5023f66ffcf01ea93a02f8b4_7);
        assert(Py_REFCNT(frame_6f4c777b5023f66ffcf01ea93a02f8b4_7) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_6;
            PyObject *tmp_tuple_element_59;
            tmp_tuple_element_59 = mod_consts[133];
            tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_91;
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_59);
                tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_91 == NULL)) {
                    tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                assert(!(tmp_expression_value_91 == NULL));
                tmp_tuple_element_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[119]);
                if (tmp_tuple_element_59 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 186;
                    type_description_2 = "o";
                    goto tuple_build_exception_40;
                }
                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_59);
            }
            goto tuple_build_noexception_40;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_40:;
            Py_DECREF(tmp_list_element_6);
            goto frame_exception_exit_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_40:;
            tmp_dictset_value = MAKE_LIST_EMPTY(12);
            {
                PyObject *tmp_tuple_element_60;
                PyObject *tmp_tuple_element_61;
                PyObject *tmp_tuple_element_62;
                PyObject *tmp_tuple_element_63;
                PyObject *tmp_tuple_element_64;
                PyObject *tmp_tuple_element_65;
                PyObject *tmp_tuple_element_66;
                PyObject *tmp_tuple_element_67;
                PyObject *tmp_tuple_element_68;
                PyObject *tmp_tuple_element_69;
                PyObject *tmp_tuple_element_70;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_6);
                tmp_tuple_element_60 = mod_consts[191];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_92;
                    PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_60);
                    tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_92 == NULL)) {
                        tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_92 == NULL));
                    tmp_tuple_element_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[119]);
                    if (tmp_tuple_element_60 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 187;
                        type_description_2 = "o";
                        goto tuple_build_exception_41;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_60);
                }
                goto tuple_build_noexception_41;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_41:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_41:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_6);
                tmp_tuple_element_61 = mod_consts[192];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_61);
                tmp_tuple_element_61 = PyObject_GetItem(locals_pystray$_util$win32$$$class__6_WNDCLASSEX_184, mod_consts[122]);

                if (tmp_tuple_element_61 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_61 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[122]);

                        if (unlikely(tmp_tuple_element_61 == NULL)) {
                            tmp_tuple_element_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[122]);
                        }

                        if (tmp_tuple_element_61 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 188;
                            type_description_2 = "o";
                            goto tuple_build_exception_42;
                        }
                        Py_INCREF(tmp_tuple_element_61);
                    } else {
                        goto tuple_build_exception_42;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_61);
                goto tuple_build_noexception_42;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_42:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_42:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_6);
                tmp_tuple_element_62 = mod_consts[193];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_93;
                    PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_62);
                    tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_93 == NULL)) {
                        tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_93 == NULL));
                    tmp_tuple_element_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[194]);
                    if (tmp_tuple_element_62 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 189;
                        type_description_2 = "o";
                        goto tuple_build_exception_43;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_62);
                }
                goto tuple_build_noexception_43;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_43:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_43:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_6);
                tmp_tuple_element_63 = mod_consts[195];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_94;
                    PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_63);
                    tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_94 == NULL)) {
                        tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_94 == NULL));
                    tmp_tuple_element_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[194]);
                    if (tmp_tuple_element_63 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 190;
                        type_description_2 = "o";
                        goto tuple_build_exception_44;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_63);
                }
                goto tuple_build_noexception_44;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_44:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_44:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_6);
                tmp_tuple_element_64 = mod_consts[196];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_95;
                    PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_64);
                    tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_95 == NULL)) {
                        tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_95 == NULL));
                    tmp_tuple_element_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[197]);
                    if (tmp_tuple_element_64 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 191;
                        type_description_2 = "o";
                        goto tuple_build_exception_45;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_64);
                }
                goto tuple_build_noexception_45;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_45:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_45:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_6);
                tmp_tuple_element_65 = mod_consts[172];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_96;
                    PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_65);
                    tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_96 == NULL)) {
                        tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_96 == NULL));
                    tmp_tuple_element_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[173]);
                    if (tmp_tuple_element_65 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 192;
                        type_description_2 = "o";
                        goto tuple_build_exception_46;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_65);
                }
                goto tuple_build_noexception_46;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_46:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_46:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_6);
                tmp_tuple_element_66 = mod_consts[198];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_97;
                    PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_66);
                    tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_97 == NULL)) {
                        tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_97 == NULL));
                    tmp_tuple_element_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[197]);
                    if (tmp_tuple_element_66 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 193;
                        type_description_2 = "o";
                        goto tuple_build_exception_47;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_66);
                }
                goto tuple_build_noexception_47;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_47:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_47:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_6);
                tmp_tuple_element_67 = mod_consts[199];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_98;
                    PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_67);
                    tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_98 == NULL)) {
                        tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_98 == NULL));
                    tmp_tuple_element_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[200]);
                    if (tmp_tuple_element_67 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 194;
                        type_description_2 = "o";
                        goto tuple_build_exception_48;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_67);
                }
                goto tuple_build_noexception_48;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_48:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_48:;
                PyList_SET_ITEM(tmp_dictset_value, 8, tmp_list_element_6);
                tmp_tuple_element_68 = mod_consts[201];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_99;
                    PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_68);
                    tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_99 == NULL)) {
                        tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_99 == NULL));
                    tmp_tuple_element_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[146]);
                    if (tmp_tuple_element_68 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 195;
                        type_description_2 = "o";
                        goto tuple_build_exception_49;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_68);
                }
                goto tuple_build_noexception_49;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_49:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_49:;
                PyList_SET_ITEM(tmp_dictset_value, 9, tmp_list_element_6);
                tmp_tuple_element_69 = mod_consts[202];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_100;
                    PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_69);
                    tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_100 == NULL)) {
                        tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_100 == NULL));
                    tmp_tuple_element_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[146]);
                    if (tmp_tuple_element_69 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 196;
                        type_description_2 = "o";
                        goto tuple_build_exception_50;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_69);
                }
                goto tuple_build_noexception_50;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_50:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_50:;
                PyList_SET_ITEM(tmp_dictset_value, 10, tmp_list_element_6);
                tmp_tuple_element_70 = mod_consts[203];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_101;
                    PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_70);
                    tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_101 == NULL)) {
                        tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    assert(!(tmp_expression_value_101 == NULL));
                    tmp_tuple_element_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[173]);
                    if (tmp_tuple_element_70 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 197;
                        type_description_2 = "o";
                        goto tuple_build_exception_51;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_70);
                }
                goto tuple_build_noexception_51;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_51:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_51:;
                PyList_SET_ITEM(tmp_dictset_value, 11, tmp_list_element_6);
            }
            goto list_build_noexception_6;
            // Exception handling pass through code for list_build:
            list_build_exception_6:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_7;
            // Finished with no exception for list_build:
            list_build_noexception_6:;
            tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__6_WNDCLASSEX_184, mod_consts[149], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6f4c777b5023f66ffcf01ea93a02f8b4_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6f4c777b5023f66ffcf01ea93a02f8b4_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6f4c777b5023f66ffcf01ea93a02f8b4_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6f4c777b5023f66ffcf01ea93a02f8b4_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_6f4c777b5023f66ffcf01ea93a02f8b4_7);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_18;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto try_except_handler_18;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_pystray$_util$win32$$$class__6_WNDCLASSEX_184, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_18;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_132;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_71;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_19 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_71 = mod_consts[190];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_71);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_71 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_71);
            tmp_tuple_element_71 = locals_pystray$_util$win32$$$class__6_WNDCLASSEX_184;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_71);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_4__class_decl_dict;
            frame_7ad8e8a6934ef6906a605a204cd76687->m_frame.f_lineno = 184;
            tmp_assign_source_132 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_132 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto try_except_handler_18;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_132;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_131 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_131);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_pystray$_util$win32$$$class__6_WNDCLASSEX_184);
        locals_pystray$_util$win32$$$class__6_WNDCLASSEX_184 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pystray$_util$win32$$$class__6_WNDCLASSEX_184);
        locals_pystray$_util$win32$$$class__6_WNDCLASSEX_184 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 184;
        goto try_except_handler_16;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_131);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    {
        PyObject *tmp_assign_source_133;


        tmp_assign_source_133 = MAKE_FUNCTION_pystray$_util$win32$$$function__1__err();

        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_args_element_value_12;
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_expression_value_102 == NULL));
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[111]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        frame_7ad8e8a6934ef6906a605a204cd76687->m_frame.f_lineno = 209;
        tmp_assign_source_134 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_20);
        if (tmp_assign_source_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_expression_value_104;
        tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_104 == NULL)) {
            tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_103 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts[206]);
        if (tmp_expression_value_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_135 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[207]);
        Py_DECREF(tmp_expression_value_103);
        if (tmp_assign_source_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = mod_consts[208];
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[207]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[207]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[209], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_assattr_target_4;
        tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_105 == NULL)) {
            tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_105 == NULL));
        tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[139]);
        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[207]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[207]);
        }

        if (tmp_assattr_target_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[210], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_assattr_value_5 == NULL)) {
            tmp_assattr_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[204]);
        }

        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[207]);

        if (unlikely(tmp_assattr_target_5 == NULL)) {
            tmp_assattr_target_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[207]);
        }

        if (tmp_assattr_target_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[211], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_expression_value_107;
        tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_107 == NULL)) {
            tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_106 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts[206]);
        if (tmp_expression_value_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_136 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[212]);
        Py_DECREF(tmp_expression_value_106);
        if (tmp_assign_source_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_tuple_element_72;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_assattr_target_6;
        tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_108 == NULL)) {
            tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_108 == NULL));
        tmp_tuple_element_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[167]);
        if (tmp_tuple_element_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_6 = MAKE_TUPLE_EMPTY(12);
        {
            PyObject *tmp_expression_value_109;
            PyObject *tmp_expression_value_110;
            PyObject *tmp_expression_value_111;
            PyObject *tmp_expression_value_112;
            PyObject *tmp_expression_value_113;
            PyObject *tmp_expression_value_114;
            PyObject *tmp_expression_value_115;
            PyObject *tmp_expression_value_116;
            PyObject *tmp_expression_value_117;
            PyObject *tmp_expression_value_118;
            PyObject *tmp_expression_value_119;
            PyTuple_SET_ITEM(tmp_assattr_value_6, 0, tmp_tuple_element_72);
            tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_109 == NULL)) {
                tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_109 == NULL));
            tmp_tuple_element_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[214]);
            if (tmp_tuple_element_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto tuple_build_exception_52;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_6, 1, tmp_tuple_element_72);
            tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_110 == NULL)) {
                tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_110 == NULL));
            tmp_tuple_element_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[146]);
            if (tmp_tuple_element_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto tuple_build_exception_52;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_6, 2, tmp_tuple_element_72);
            tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_111 == NULL)) {
                tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_111 == NULL));
            tmp_tuple_element_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[167]);
            if (tmp_tuple_element_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto tuple_build_exception_52;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_6, 3, tmp_tuple_element_72);
            tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_112 == NULL)) {
                tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_112 == NULL));
            tmp_tuple_element_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[194]);
            if (tmp_tuple_element_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto tuple_build_exception_52;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_6, 4, tmp_tuple_element_72);
            tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_113 == NULL)) {
                tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_113 == NULL));
            tmp_tuple_element_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts[194]);
            if (tmp_tuple_element_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto tuple_build_exception_52;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_6, 5, tmp_tuple_element_72);
            tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_114 == NULL)) {
                tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_114 == NULL));
            tmp_tuple_element_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[194]);
            if (tmp_tuple_element_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto tuple_build_exception_52;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_6, 6, tmp_tuple_element_72);
            tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_115 == NULL)) {
                tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_115 == NULL));
            tmp_tuple_element_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts[194]);
            if (tmp_tuple_element_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto tuple_build_exception_52;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_6, 7, tmp_tuple_element_72);
            tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_116 == NULL)) {
                tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_116 == NULL));
            tmp_tuple_element_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[118]);
            if (tmp_tuple_element_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto tuple_build_exception_52;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_6, 8, tmp_tuple_element_72);
            tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_117 == NULL)) {
                tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_117 == NULL));
            tmp_tuple_element_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[139]);
            if (tmp_tuple_element_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto tuple_build_exception_52;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_6, 9, tmp_tuple_element_72);
            tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_118 == NULL)) {
                tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_118 == NULL));
            tmp_tuple_element_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts[215]);
            if (tmp_tuple_element_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto tuple_build_exception_52;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_6, 10, tmp_tuple_element_72);
            tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_119 == NULL)) {
                tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_119 == NULL));
            tmp_tuple_element_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts[144]);
            if (tmp_tuple_element_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto tuple_build_exception_52;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_6, 11, tmp_tuple_element_72);
        }
        goto tuple_build_noexception_52;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_52:;
        Py_DECREF(tmp_assattr_value_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_52:;
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[213]);

        if (unlikely(tmp_assattr_target_6 == NULL)) {
            tmp_assattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[213]);
        }

        assert(!(tmp_assattr_target_6 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[209], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_expression_value_120;
        PyObject *tmp_assattr_target_7;
        tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_120 == NULL)) {
            tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_120 == NULL));
        tmp_assattr_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts[118]);
        if (tmp_assattr_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_7 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[213]);

        if (unlikely(tmp_assattr_target_7 == NULL)) {
            tmp_assattr_target_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[213]);
        }

        if (tmp_assattr_target_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_7);

            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[210], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_value_8 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_assattr_value_8 == NULL)) {
            tmp_assattr_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[204]);
        }

        if (tmp_assattr_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_8 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[213]);

        if (unlikely(tmp_assattr_target_8 == NULL)) {
            tmp_assattr_target_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[213]);
        }

        if (tmp_assattr_target_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[211], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_expression_value_122;
        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_122 == NULL)) {
            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_121 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts[206]);
        if (tmp_expression_value_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_137 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts[216]);
        Py_DECREF(tmp_expression_value_121);
        if (tmp_assign_source_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_tuple_element_73;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_assattr_target_9;
        tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_123 == NULL)) {
            tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_123 == NULL));
        tmp_tuple_element_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts[118]);
        if (tmp_tuple_element_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_9 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_124;
            PyObject *tmp_expression_value_125;
            PyObject *tmp_expression_value_126;
            PyTuple_SET_ITEM(tmp_assattr_value_9, 0, tmp_tuple_element_73);
            tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_124 == NULL)) {
                tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_124 == NULL));
            tmp_tuple_element_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts[119]);
            if (tmp_tuple_element_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_9, 1, tmp_tuple_element_73);
            tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_125 == NULL)) {
                tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_125 == NULL));
            tmp_tuple_element_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_125, mod_consts[120]);
            if (tmp_tuple_element_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_9, 2, tmp_tuple_element_73);
            tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_126 == NULL)) {
                tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_126 == NULL));
            tmp_tuple_element_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[121]);
            if (tmp_tuple_element_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_9, 3, tmp_tuple_element_73);
        }
        goto tuple_build_noexception_53;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_53:;
        Py_DECREF(tmp_assattr_value_9);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_53:;
        tmp_assattr_target_9 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[217]);

        if (unlikely(tmp_assattr_target_9 == NULL)) {
            tmp_assattr_target_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[217]);
        }

        assert(!(tmp_assattr_target_9 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[209], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_assattr_target_10;
        tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_127 == NULL)) {
            tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_127 == NULL));
        tmp_assattr_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, mod_consts[167]);
        if (tmp_assattr_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_10 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[217]);

        if (unlikely(tmp_assattr_target_10 == NULL)) {
            tmp_assattr_target_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[217]);
        }

        if (tmp_assattr_target_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[210], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_expression_value_129;
        tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_129 == NULL)) {
            tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_128 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts[206]);
        if (tmp_expression_value_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_138 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts[218]);
        Py_DECREF(tmp_expression_value_128);
        if (tmp_assign_source_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_tuple_element_74;
        PyObject *tmp_expression_value_130;
        PyObject *tmp_assattr_target_11;
        tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_130 == NULL)) {
            tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_130 == NULL));
        tmp_tuple_element_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts[173]);
        if (tmp_tuple_element_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_11 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assattr_value_11, 0, tmp_tuple_element_74);
        tmp_assattr_target_11 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[218]);

        if (unlikely(tmp_assattr_target_11 == NULL)) {
            tmp_assattr_target_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[218]);
        }

        assert(!(tmp_assattr_target_11 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[209], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_assattr_target_12;
        tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_131 == NULL)) {
            tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_131 == NULL));
        tmp_assattr_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, mod_consts[219]);
        if (tmp_assattr_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_12 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[218]);

        if (unlikely(tmp_assattr_target_12 == NULL)) {
            tmp_assattr_target_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[218]);
        }

        if (tmp_assattr_target_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_12);

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[210], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        tmp_assattr_value_13 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_assattr_value_13 == NULL)) {
            tmp_assattr_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[204]);
        }

        if (tmp_assattr_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_13 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[218]);

        if (unlikely(tmp_assattr_target_13 == NULL)) {
            tmp_assattr_target_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[218]);
        }

        if (tmp_assattr_target_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[211], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_expression_value_133;
        tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_133 == NULL)) {
            tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_132 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, mod_consts[206]);
        if (tmp_expression_value_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_139 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts[220]);
        Py_DECREF(tmp_expression_value_132);
        if (tmp_assign_source_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_tuple_element_75;
        PyObject *tmp_expression_value_134;
        PyObject *tmp_assattr_target_14;
        tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_134 == NULL)) {
            tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_134 == NULL));
        tmp_tuple_element_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_134, mod_consts[139]);
        if (tmp_tuple_element_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_14 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assattr_value_14, 0, tmp_tuple_element_75);
        tmp_assattr_target_14 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_assattr_target_14 == NULL)) {
            tmp_assattr_target_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[220]);
        }

        assert(!(tmp_assattr_target_14 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[209], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_assattr_target_15;
        tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_135 == NULL)) {
            tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_135 == NULL));
        tmp_assattr_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts[219]);
        if (tmp_assattr_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_15 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_assattr_target_15 == NULL)) {
            tmp_assattr_target_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[220]);
        }

        if (tmp_assattr_target_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_15);

            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[210], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        tmp_assattr_value_16 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_assattr_value_16 == NULL)) {
            tmp_assattr_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[204]);
        }

        if (tmp_assattr_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_16 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_assattr_target_16 == NULL)) {
            tmp_assattr_target_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[220]);
        }

        if (tmp_assattr_target_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts[211], tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_expression_value_136;
        PyObject *tmp_expression_value_137;
        tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_137 == NULL)) {
            tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_136 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_137, mod_consts[206]);
        if (tmp_expression_value_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_140 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_136, mod_consts[221]);
        Py_DECREF(tmp_expression_value_136);
        if (tmp_assign_source_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_tuple_element_76;
        PyObject *tmp_expression_value_138;
        PyObject *tmp_assattr_target_17;
        tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_138 == NULL)) {
            tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_138 == NULL));
        tmp_tuple_element_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, mod_consts[118]);
        if (tmp_tuple_element_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_17 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assattr_value_17, 0, tmp_tuple_element_76);
        tmp_assattr_target_17 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[221]);

        if (unlikely(tmp_assattr_target_17 == NULL)) {
            tmp_assattr_target_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[221]);
        }

        assert(!(tmp_assattr_target_17 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts[209], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_assattr_target_18;
        tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_139 == NULL)) {
            tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_139 == NULL));
        tmp_assattr_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_139, mod_consts[219]);
        if (tmp_assattr_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_18 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[221]);

        if (unlikely(tmp_assattr_target_18 == NULL)) {
            tmp_assattr_target_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[221]);
        }

        if (tmp_assattr_target_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_18);

            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts[210], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_assattr_target_19;
        tmp_assattr_value_19 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_assattr_value_19 == NULL)) {
            tmp_assattr_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[204]);
        }

        if (tmp_assattr_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_19 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[221]);

        if (unlikely(tmp_assattr_target_19 == NULL)) {
            tmp_assattr_target_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[221]);
        }

        if (tmp_assattr_target_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts[211], tmp_assattr_value_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_expression_value_140;
        PyObject *tmp_expression_value_141;
        tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_141 == NULL)) {
            tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_140 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts[206]);
        if (tmp_expression_value_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_141 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_140, mod_consts[222]);
        Py_DECREF(tmp_expression_value_140);
        if (tmp_assign_source_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_tuple_element_77;
        PyObject *tmp_assattr_target_20;
        tmp_tuple_element_77 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_tuple_element_77 == NULL)) {
            tmp_tuple_element_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
        }

        if (tmp_tuple_element_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_20 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assattr_value_20, 0, tmp_tuple_element_77);
        tmp_assattr_target_20 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[223]);

        if (unlikely(tmp_assattr_target_20 == NULL)) {
            tmp_assattr_target_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[223]);
        }

        assert(!(tmp_assattr_target_20 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts[209], tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_value_20);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_expression_value_142;
        PyObject *tmp_assattr_target_21;
        tmp_expression_value_142 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_142 == NULL)) {
            tmp_expression_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_142 == NULL));
        tmp_assattr_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_142, mod_consts[167]);
        if (tmp_assattr_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_21 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[223]);

        if (unlikely(tmp_assattr_target_21 == NULL)) {
            tmp_assattr_target_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[223]);
        }

        if (tmp_assattr_target_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_21);

            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_21, mod_consts[210], tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_value_21);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_expression_value_144;
        tmp_expression_value_144 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_144 == NULL)) {
            tmp_expression_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_143 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_144, mod_consts[206]);
        if (tmp_expression_value_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_142 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_143, mod_consts[224]);
        Py_DECREF(tmp_expression_value_143);
        if (tmp_assign_source_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_tuple_element_78;
        PyObject *tmp_assattr_target_22;
        tmp_tuple_element_78 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_tuple_element_78 == NULL)) {
            tmp_tuple_element_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
        }

        if (tmp_tuple_element_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_22 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assattr_value_22, 0, tmp_tuple_element_78);
        tmp_assattr_target_22 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[224]);

        if (unlikely(tmp_assattr_target_22 == NULL)) {
            tmp_assattr_target_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[224]);
        }

        assert(!(tmp_assattr_target_22 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_22, mod_consts[209], tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_value_22);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_assattr_target_23;
        tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_145 == NULL)) {
            tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_145 == NULL));
        tmp_assattr_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_145, mod_consts[219]);
        if (tmp_assattr_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_23 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[224]);

        if (unlikely(tmp_assattr_target_23 == NULL)) {
            tmp_assattr_target_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[224]);
        }

        if (tmp_assattr_target_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_23);

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_23, mod_consts[210], tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_value_23);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_24;
        PyObject *tmp_assattr_target_24;
        tmp_assattr_value_24 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_assattr_value_24 == NULL)) {
            tmp_assattr_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[204]);
        }

        if (tmp_assattr_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_24 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[224]);

        if (unlikely(tmp_assattr_target_24 == NULL)) {
            tmp_assattr_target_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[224]);
        }

        if (tmp_assattr_target_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_24, mod_consts[211], tmp_assattr_value_24);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_expression_value_146;
        PyObject *tmp_expression_value_147;
        tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_147 == NULL)) {
            tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_146 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, mod_consts[206]);
        if (tmp_expression_value_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_143 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_146, mod_consts[225]);
        Py_DECREF(tmp_expression_value_146);
        if (tmp_assign_source_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assattr_value_25;
        PyObject *tmp_tuple_element_79;
        PyObject *tmp_assattr_target_25;
        tmp_tuple_element_79 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_tuple_element_79 == NULL)) {
            tmp_tuple_element_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
        }

        if (tmp_tuple_element_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_25 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_148;
            PyObject *tmp_expression_value_149;
            PyObject *tmp_expression_value_150;
            PyTuple_SET_ITEM0(tmp_assattr_value_25, 0, tmp_tuple_element_79);
            tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_148 == NULL)) {
                tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_148 == NULL));
            tmp_tuple_element_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_148, mod_consts[118]);
            if (tmp_tuple_element_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto tuple_build_exception_54;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_25, 1, tmp_tuple_element_79);
            tmp_expression_value_149 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_149 == NULL)) {
                tmp_expression_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_149 == NULL));
            tmp_tuple_element_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_149, mod_consts[119]);
            if (tmp_tuple_element_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto tuple_build_exception_54;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_25, 2, tmp_tuple_element_79);
            tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_150 == NULL)) {
                tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_150 == NULL));
            tmp_tuple_element_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_150, mod_consts[119]);
            if (tmp_tuple_element_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto tuple_build_exception_54;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_25, 3, tmp_tuple_element_79);
        }
        goto tuple_build_noexception_54;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_54:;
        Py_DECREF(tmp_assattr_value_25);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_54:;
        tmp_assattr_target_25 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[226]);

        if (unlikely(tmp_assattr_target_25 == NULL)) {
            tmp_assattr_target_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[226]);
        }

        assert(!(tmp_assattr_target_25 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_25, mod_consts[209], tmp_assattr_value_25);
        Py_DECREF(tmp_assattr_value_25);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_26;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_assattr_target_26;
        tmp_expression_value_151 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_151 == NULL)) {
            tmp_expression_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_151 == NULL));
        tmp_assattr_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_151, mod_consts[219]);
        if (tmp_assattr_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_26 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[226]);

        if (unlikely(tmp_assattr_target_26 == NULL)) {
            tmp_assattr_target_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[226]);
        }

        if (tmp_assattr_target_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_26);

            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_26, mod_consts[210], tmp_assattr_value_26);
        Py_DECREF(tmp_assattr_value_26);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_expression_value_152;
        PyObject *tmp_expression_value_153;
        tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_153 == NULL)) {
            tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_152 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_153, mod_consts[227]);
        if (tmp_expression_value_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_144 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_152, mod_consts[228]);
        Py_DECREF(tmp_expression_value_152);
        if (tmp_assign_source_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assattr_value_27;
        PyObject *tmp_tuple_element_80;
        PyObject *tmp_expression_value_154;
        PyObject *tmp_assattr_target_27;
        tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_154 == NULL)) {
            tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_154 == NULL));
        tmp_tuple_element_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_154, mod_consts[146]);
        if (tmp_tuple_element_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_27 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assattr_value_27, 0, tmp_tuple_element_80);
        tmp_assattr_target_27 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_assattr_target_27 == NULL)) {
            tmp_assattr_target_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        assert(!(tmp_assattr_target_27 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_27, mod_consts[209], tmp_assattr_value_27);
        Py_DECREF(tmp_assattr_value_27);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_28;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_assattr_target_28;
        tmp_expression_value_155 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_155 == NULL)) {
            tmp_expression_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_155 == NULL));
        tmp_assattr_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_155, mod_consts[230]);
        if (tmp_assattr_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_28 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_assattr_target_28 == NULL)) {
            tmp_assattr_target_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_assattr_target_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_28);

            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_28, mod_consts[210], tmp_assattr_value_28);
        Py_DECREF(tmp_assattr_value_28);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_29;
        PyObject *tmp_assattr_target_29;
        tmp_assattr_value_29 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_assattr_value_29 == NULL)) {
            tmp_assattr_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[204]);
        }

        if (tmp_assattr_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_29 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_assattr_target_29 == NULL)) {
            tmp_assattr_target_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_assattr_target_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_29, mod_consts[211], tmp_assattr_value_29);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_expression_value_156;
        PyObject *tmp_expression_value_157;
        tmp_expression_value_157 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_157 == NULL)) {
            tmp_expression_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_156 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_157, mod_consts[206]);
        if (tmp_expression_value_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_145 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_156, mod_consts[231]);
        Py_DECREF(tmp_expression_value_156);
        if (tmp_assign_source_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assattr_value_30;
        PyObject *tmp_tuple_element_81;
        PyObject *tmp_expression_value_158;
        PyObject *tmp_assattr_target_30;
        tmp_expression_value_158 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_158 == NULL)) {
            tmp_expression_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_158 == NULL));
        tmp_tuple_element_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_158, mod_consts[139]);
        if (tmp_tuple_element_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_30 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_159;
            PyObject *tmp_expression_value_160;
            PyTuple_SET_ITEM(tmp_assattr_value_30, 0, tmp_tuple_element_81);
            tmp_expression_value_159 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_159 == NULL)) {
                tmp_expression_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_159 == NULL));
            tmp_tuple_element_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_159, mod_consts[119]);
            if (tmp_tuple_element_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;

                goto tuple_build_exception_55;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_30, 1, tmp_tuple_element_81);
            tmp_expression_value_160 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_160 == NULL)) {
                tmp_expression_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_160 == NULL));
            tmp_tuple_element_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_160, mod_consts[219]);
            if (tmp_tuple_element_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;

                goto tuple_build_exception_55;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_30, 2, tmp_tuple_element_81);
            tmp_tuple_element_81 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[151]);

            if (unlikely(tmp_tuple_element_81 == NULL)) {
                tmp_tuple_element_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[151]);
            }

            if (tmp_tuple_element_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;

                goto tuple_build_exception_55;
            }
            PyTuple_SET_ITEM0(tmp_assattr_value_30, 3, tmp_tuple_element_81);
        }
        goto tuple_build_noexception_55;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_55:;
        Py_DECREF(tmp_assattr_value_30);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_55:;
        tmp_assattr_target_30 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[232]);

        if (unlikely(tmp_assattr_target_30 == NULL)) {
            tmp_assattr_target_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[232]);
        }

        assert(!(tmp_assattr_target_30 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_30, mod_consts[209], tmp_assattr_value_30);
        Py_DECREF(tmp_assattr_value_30);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_31;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_assattr_target_31;
        tmp_expression_value_161 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_161 == NULL)) {
            tmp_expression_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_161 == NULL));
        tmp_assattr_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_161, mod_consts[219]);
        if (tmp_assattr_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_31 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[232]);

        if (unlikely(tmp_assattr_target_31 == NULL)) {
            tmp_assattr_target_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[232]);
        }

        if (tmp_assattr_target_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_31);

            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_31, mod_consts[210], tmp_assattr_value_31);
        Py_DECREF(tmp_assattr_value_31);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_32;
        PyObject *tmp_assattr_target_32;
        tmp_assattr_value_32 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_assattr_value_32 == NULL)) {
            tmp_assattr_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[204]);
        }

        if (tmp_assattr_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_32 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[232]);

        if (unlikely(tmp_assattr_target_32 == NULL)) {
            tmp_assattr_target_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[232]);
        }

        if (tmp_assattr_target_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_32, mod_consts[211], tmp_assattr_value_32);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_expression_value_163;
        tmp_expression_value_163 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_163 == NULL)) {
            tmp_expression_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_162 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_163, mod_consts[206]);
        if (tmp_expression_value_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_146 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_162, mod_consts[233]);
        Py_DECREF(tmp_expression_value_162);
        if (tmp_assign_source_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assattr_value_33;
        PyObject *tmp_tuple_element_82;
        PyObject *tmp_expression_value_164;
        PyObject *tmp_assattr_target_33;
        tmp_expression_value_164 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_164 == NULL)) {
            tmp_expression_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_164 == NULL));
        tmp_tuple_element_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_164, mod_consts[215]);
        if (tmp_tuple_element_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_33 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_expression_value_165;
            PyObject *tmp_expression_value_166;
            PyObject *tmp_expression_value_167;
            PyObject *tmp_expression_value_168;
            PyObject *tmp_expression_value_169;
            PyTuple_SET_ITEM(tmp_assattr_value_33, 0, tmp_tuple_element_82);
            tmp_expression_value_165 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_165 == NULL)) {
                tmp_expression_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_165 == NULL));
            tmp_tuple_element_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_165, mod_consts[146]);
            if (tmp_tuple_element_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_56;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_33, 1, tmp_tuple_element_82);
            tmp_expression_value_166 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_166 == NULL)) {
                tmp_expression_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_166 == NULL));
            tmp_tuple_element_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_166, mod_consts[119]);
            if (tmp_tuple_element_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_56;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_33, 2, tmp_tuple_element_82);
            tmp_expression_value_167 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_167 == NULL)) {
                tmp_expression_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_167 == NULL));
            tmp_tuple_element_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_167, mod_consts[194]);
            if (tmp_tuple_element_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_56;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_33, 3, tmp_tuple_element_82);
            tmp_expression_value_168 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_168 == NULL)) {
                tmp_expression_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_168 == NULL));
            tmp_tuple_element_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_168, mod_consts[194]);
            if (tmp_tuple_element_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_56;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_33, 4, tmp_tuple_element_82);
            tmp_expression_value_169 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_169 == NULL)) {
                tmp_expression_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_169 == NULL));
            tmp_tuple_element_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_169, mod_consts[119]);
            if (tmp_tuple_element_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_56;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_33, 5, tmp_tuple_element_82);
        }
        goto tuple_build_noexception_56;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_56:;
        Py_DECREF(tmp_assattr_value_33);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_56:;
        tmp_assattr_target_33 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[234]);

        if (unlikely(tmp_assattr_target_33 == NULL)) {
            tmp_assattr_target_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[234]);
        }

        assert(!(tmp_assattr_target_33 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_33, mod_consts[209], tmp_assattr_value_33);
        Py_DECREF(tmp_assattr_value_33);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_34;
        PyObject *tmp_expression_value_170;
        PyObject *tmp_assattr_target_34;
        tmp_expression_value_170 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_170 == NULL)) {
            tmp_expression_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_170 == NULL));
        tmp_assattr_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_170, mod_consts[197]);
        if (tmp_assattr_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_34 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[234]);

        if (unlikely(tmp_assattr_target_34 == NULL)) {
            tmp_assattr_target_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[234]);
        }

        if (tmp_assattr_target_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_34);

            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_34, mod_consts[210], tmp_assattr_value_34);
        Py_DECREF(tmp_assattr_value_34);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_35;
        PyObject *tmp_assattr_target_35;
        tmp_assattr_value_35 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_assattr_value_35 == NULL)) {
            tmp_assattr_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[204]);
        }

        if (tmp_assattr_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_35 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[234]);

        if (unlikely(tmp_assattr_target_35 == NULL)) {
            tmp_assattr_target_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[234]);
        }

        if (tmp_assattr_target_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_35, mod_consts[211], tmp_assattr_value_35);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_expression_value_171;
        PyObject *tmp_expression_value_172;
        tmp_expression_value_172 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_172 == NULL)) {
            tmp_expression_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_171 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_172, mod_consts[206]);
        if (tmp_expression_value_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_147 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_171, mod_consts[235]);
        Py_DECREF(tmp_expression_value_171);
        if (tmp_assign_source_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assattr_value_36;
        PyObject *tmp_tuple_element_83;
        PyObject *tmp_assattr_target_36;
        tmp_tuple_element_83 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_tuple_element_83 == NULL)) {
            tmp_tuple_element_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
        }

        if (tmp_tuple_element_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_36 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_expression_value_173;
            PyObject *tmp_expression_value_174;
            PyObject *tmp_expression_value_175;
            PyObject *tmp_expression_value_176;
            PyTuple_SET_ITEM0(tmp_assattr_value_36, 0, tmp_tuple_element_83);
            tmp_expression_value_173 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_173 == NULL)) {
                tmp_expression_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_173 == NULL));
            tmp_tuple_element_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_173, mod_consts[118]);
            if (tmp_tuple_element_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto tuple_build_exception_57;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_36, 1, tmp_tuple_element_83);
            tmp_expression_value_174 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_174 == NULL)) {
                tmp_expression_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_174 == NULL));
            tmp_tuple_element_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_174, mod_consts[119]);
            if (tmp_tuple_element_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto tuple_build_exception_57;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_36, 2, tmp_tuple_element_83);
            tmp_expression_value_175 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_175 == NULL)) {
                tmp_expression_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_175 == NULL));
            tmp_tuple_element_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_175, mod_consts[119]);
            if (tmp_tuple_element_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto tuple_build_exception_57;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_36, 3, tmp_tuple_element_83);
            tmp_expression_value_176 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_176 == NULL)) {
                tmp_expression_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_176 == NULL));
            tmp_tuple_element_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_176, mod_consts[119]);
            if (tmp_tuple_element_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto tuple_build_exception_57;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_36, 4, tmp_tuple_element_83);
        }
        goto tuple_build_noexception_57;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_57:;
        Py_DECREF(tmp_assattr_value_36);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_57:;
        tmp_assattr_target_36 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[236]);

        if (unlikely(tmp_assattr_target_36 == NULL)) {
            tmp_assattr_target_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[236]);
        }

        assert(!(tmp_assattr_target_36 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_36, mod_consts[209], tmp_assattr_value_36);
        Py_DECREF(tmp_assattr_value_36);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_37;
        PyObject *tmp_expression_value_177;
        PyObject *tmp_assattr_target_37;
        tmp_expression_value_177 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_177 == NULL)) {
            tmp_expression_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_177 == NULL));
        tmp_assattr_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_177, mod_consts[219]);
        if (tmp_assattr_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_37 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[236]);

        if (unlikely(tmp_assattr_target_37 == NULL)) {
            tmp_assattr_target_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[236]);
        }

        if (tmp_assattr_target_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_37);

            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_37, mod_consts[210], tmp_assattr_value_37);
        Py_DECREF(tmp_assattr_value_37);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_expression_value_178;
        PyObject *tmp_expression_value_179;
        tmp_expression_value_179 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_179 == NULL)) {
            tmp_expression_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_178 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_179, mod_consts[206]);
        if (tmp_expression_value_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_148 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_178, mod_consts[237]);
        Py_DECREF(tmp_expression_value_178);
        if (tmp_assign_source_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assattr_value_38;
        PyObject *tmp_tuple_element_84;
        PyObject *tmp_expression_value_180;
        PyObject *tmp_assattr_target_38;
        tmp_expression_value_180 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_180 == NULL)) {
            tmp_expression_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_180 == NULL));
        tmp_tuple_element_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_180, mod_consts[118]);
        if (tmp_tuple_element_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_38 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_181;
            PyObject *tmp_expression_value_182;
            PyObject *tmp_expression_value_183;
            PyTuple_SET_ITEM(tmp_assattr_value_38, 0, tmp_tuple_element_84);
            tmp_expression_value_181 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_181 == NULL)) {
                tmp_expression_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_181 == NULL));
            tmp_tuple_element_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_181, mod_consts[119]);
            if (tmp_tuple_element_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto tuple_build_exception_58;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_38, 1, tmp_tuple_element_84);
            tmp_expression_value_182 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_182 == NULL)) {
                tmp_expression_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_182 == NULL));
            tmp_tuple_element_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_182, mod_consts[120]);
            if (tmp_tuple_element_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto tuple_build_exception_58;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_38, 2, tmp_tuple_element_84);
            tmp_expression_value_183 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_183 == NULL)) {
                tmp_expression_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_183 == NULL));
            tmp_tuple_element_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_183, mod_consts[121]);
            if (tmp_tuple_element_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto tuple_build_exception_58;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_38, 3, tmp_tuple_element_84);
        }
        goto tuple_build_noexception_58;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_58:;
        Py_DECREF(tmp_assattr_value_38);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_58:;
        tmp_assattr_target_38 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[238]);

        if (unlikely(tmp_assattr_target_38 == NULL)) {
            tmp_assattr_target_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[238]);
        }

        assert(!(tmp_assattr_target_38 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_38, mod_consts[209], tmp_assattr_value_38);
        Py_DECREF(tmp_assattr_value_38);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_39;
        PyObject *tmp_expression_value_184;
        PyObject *tmp_assattr_target_39;
        tmp_expression_value_184 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_184 == NULL)) {
            tmp_expression_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_184 == NULL));
        tmp_assattr_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_184, mod_consts[219]);
        if (tmp_assattr_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_39 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[238]);

        if (unlikely(tmp_assattr_target_39 == NULL)) {
            tmp_assattr_target_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[238]);
        }

        if (tmp_assattr_target_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_39);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_39, mod_consts[210], tmp_assattr_value_39);
        Py_DECREF(tmp_assattr_value_39);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_40;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_assattr_target_40;
        tmp_expression_value_185 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_185 == NULL)) {
            tmp_expression_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_185 == NULL));
        tmp_assattr_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_185, mod_consts[219]);
        if (tmp_assattr_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_40 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[238]);

        if (unlikely(tmp_assattr_target_40 == NULL)) {
            tmp_assattr_target_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[238]);
        }

        if (tmp_assattr_target_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_40);

            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_40, mod_consts[210], tmp_assattr_value_40);
        Py_DECREF(tmp_assattr_value_40);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_expression_value_186;
        PyObject *tmp_expression_value_187;
        tmp_expression_value_187 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_187 == NULL)) {
            tmp_expression_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_186 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_187, mod_consts[206]);
        if (tmp_expression_value_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_149 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_186, mod_consts[239]);
        Py_DECREF(tmp_expression_value_186);
        if (tmp_assign_source_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assattr_value_41;
        PyObject *tmp_tuple_element_85;
        PyObject *tmp_expression_value_188;
        PyObject *tmp_assattr_target_41;
        tmp_expression_value_188 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_188 == NULL)) {
            tmp_expression_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_188 == NULL));
        tmp_tuple_element_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_188, mod_consts[194]);
        if (tmp_tuple_element_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_41 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assattr_value_41, 0, tmp_tuple_element_85);
        tmp_assattr_target_41 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[239]);

        if (unlikely(tmp_assattr_target_41 == NULL)) {
            tmp_assattr_target_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[239]);
        }

        assert(!(tmp_assattr_target_41 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_41, mod_consts[209], tmp_assattr_value_41);
        Py_DECREF(tmp_assattr_value_41);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_expression_value_189;
        PyObject *tmp_expression_value_190;
        tmp_expression_value_190 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_190 == NULL)) {
            tmp_expression_value_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_189 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_190, mod_consts[206]);
        if (tmp_expression_value_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_150 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_189, mod_consts[240]);
        Py_DECREF(tmp_expression_value_189);
        if (tmp_assign_source_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assattr_value_42;
        PyObject *tmp_tuple_element_86;
        PyObject *tmp_assattr_target_42;
        tmp_tuple_element_86 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_tuple_element_86 == NULL)) {
            tmp_tuple_element_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        if (tmp_tuple_element_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_42 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assattr_value_42, 0, tmp_tuple_element_86);
        tmp_assattr_target_42 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[241]);

        if (unlikely(tmp_assattr_target_42 == NULL)) {
            tmp_assattr_target_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[241]);
        }

        assert(!(tmp_assattr_target_42 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_42, mod_consts[209], tmp_assattr_value_42);
        Py_DECREF(tmp_assattr_value_42);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_43;
        PyObject *tmp_expression_value_191;
        PyObject *tmp_assattr_target_43;
        tmp_expression_value_191 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_191 == NULL)) {
            tmp_expression_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_191 == NULL));
        tmp_assattr_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_191, mod_consts[214]);
        if (tmp_assattr_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_43 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[241]);

        if (unlikely(tmp_assattr_target_43 == NULL)) {
            tmp_assattr_target_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[241]);
        }

        if (tmp_assattr_target_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_43);

            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_43, mod_consts[210], tmp_assattr_value_43);
        Py_DECREF(tmp_assattr_value_43);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_44;
        PyObject *tmp_assattr_target_44;
        tmp_assattr_value_44 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_assattr_value_44 == NULL)) {
            tmp_assattr_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[204]);
        }

        if (tmp_assattr_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_44 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[241]);

        if (unlikely(tmp_assattr_target_44 == NULL)) {
            tmp_assattr_target_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[241]);
        }

        if (tmp_assattr_target_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_44, mod_consts[211], tmp_assattr_value_44);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_expression_value_192;
        PyObject *tmp_expression_value_193;
        tmp_expression_value_193 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_193 == NULL)) {
            tmp_expression_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_192 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_193, mod_consts[206]);
        if (tmp_expression_value_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_151 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_192, mod_consts[242]);
        Py_DECREF(tmp_expression_value_192);
        if (tmp_assign_source_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assattr_value_45;
        PyObject *tmp_tuple_element_87;
        PyObject *tmp_expression_value_194;
        PyObject *tmp_assattr_target_45;
        tmp_expression_value_194 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_194 == NULL)) {
            tmp_expression_value_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_194 == NULL));
        tmp_tuple_element_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_194, mod_consts[118]);
        if (tmp_tuple_element_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_45 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assattr_value_45, 0, tmp_tuple_element_87);
        tmp_assattr_target_45 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[242]);

        if (unlikely(tmp_assattr_target_45 == NULL)) {
            tmp_assattr_target_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[242]);
        }

        assert(!(tmp_assattr_target_45 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_45, mod_consts[209], tmp_assattr_value_45);
        Py_DECREF(tmp_assattr_value_45);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_46;
        PyObject *tmp_expression_value_195;
        PyObject *tmp_assattr_target_46;
        tmp_expression_value_195 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_195 == NULL)) {
            tmp_expression_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_195 == NULL));
        tmp_assattr_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_195, mod_consts[219]);
        if (tmp_assattr_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_46 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[242]);

        if (unlikely(tmp_assattr_target_46 == NULL)) {
            tmp_assattr_target_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[242]);
        }

        if (tmp_assattr_target_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_46);

            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_46, mod_consts[210], tmp_assattr_value_46);
        Py_DECREF(tmp_assattr_value_46);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_expression_value_196;
        PyObject *tmp_expression_value_197;
        tmp_expression_value_197 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_197 == NULL)) {
            tmp_expression_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_196 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_197, mod_consts[243]);
        if (tmp_expression_value_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_152 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_196, mod_consts[244]);
        Py_DECREF(tmp_expression_value_196);
        if (tmp_assign_source_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assattr_value_47;
        PyObject *tmp_tuple_element_88;
        PyObject *tmp_expression_value_198;
        PyObject *tmp_assattr_target_47;
        tmp_expression_value_198 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_198 == NULL)) {
            tmp_expression_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_198 == NULL));
        tmp_tuple_element_88 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_198, mod_consts[167]);
        if (tmp_tuple_element_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_47 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_assattr_value_47, 0, tmp_tuple_element_88);
        tmp_tuple_element_88 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[185]);

        if (unlikely(tmp_tuple_element_88 == NULL)) {
            tmp_tuple_element_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[185]);
        }

        if (tmp_tuple_element_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto tuple_build_exception_59;
        }
        PyTuple_SET_ITEM0(tmp_assattr_value_47, 1, tmp_tuple_element_88);
        goto tuple_build_noexception_59;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_59:;
        Py_DECREF(tmp_assattr_value_47);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_59:;
        tmp_assattr_target_47 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_assattr_target_47 == NULL)) {
            tmp_assattr_target_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[245]);
        }

        assert(!(tmp_assattr_target_47 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_47, mod_consts[209], tmp_assattr_value_47);
        Py_DECREF(tmp_assattr_value_47);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_48;
        PyObject *tmp_expression_value_199;
        PyObject *tmp_assattr_target_48;
        tmp_expression_value_199 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_199 == NULL)) {
            tmp_expression_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_199 == NULL));
        tmp_assattr_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_199, mod_consts[219]);
        if (tmp_assattr_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_48 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_assattr_target_48 == NULL)) {
            tmp_assattr_target_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[245]);
        }

        if (tmp_assattr_target_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_48);

            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_48, mod_consts[210], tmp_assattr_value_48);
        Py_DECREF(tmp_assattr_value_48);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_expression_value_200;
        PyObject *tmp_expression_value_201;
        tmp_expression_value_201 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_201 == NULL)) {
            tmp_expression_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_201 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_200 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_201, mod_consts[206]);
        if (tmp_expression_value_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_153 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_200, mod_consts[246]);
        Py_DECREF(tmp_expression_value_200);
        if (tmp_assign_source_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assattr_value_49;
        PyObject *tmp_tuple_element_89;
        PyObject *tmp_assattr_target_49;
        tmp_tuple_element_89 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_tuple_element_89 == NULL)) {
            tmp_tuple_element_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
        }

        if (tmp_tuple_element_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_49 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assattr_value_49, 0, tmp_tuple_element_89);
        tmp_assattr_target_49 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[246]);

        if (unlikely(tmp_assattr_target_49 == NULL)) {
            tmp_assattr_target_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[246]);
        }

        assert(!(tmp_assattr_target_49 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_49, mod_consts[209], tmp_assattr_value_49);
        Py_DECREF(tmp_assattr_value_49);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_50;
        PyObject *tmp_expression_value_202;
        PyObject *tmp_assattr_target_50;
        tmp_expression_value_202 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_202 == NULL)) {
            tmp_expression_value_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_202 == NULL));
        tmp_assattr_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_202, mod_consts[219]);
        if (tmp_assattr_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_50 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[246]);

        if (unlikely(tmp_assattr_target_50 == NULL)) {
            tmp_assattr_target_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[246]);
        }

        if (tmp_assattr_target_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_50);

            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_50, mod_consts[210], tmp_assattr_value_50);
        Py_DECREF(tmp_assattr_value_50);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_expression_value_203;
        PyObject *tmp_expression_value_204;
        tmp_expression_value_204 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_204 == NULL)) {
            tmp_expression_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_203 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_204, mod_consts[206]);
        if (tmp_expression_value_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_154 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_203, mod_consts[247]);
        Py_DECREF(tmp_expression_value_203);
        if (tmp_assign_source_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assattr_value_51;
        PyObject *tmp_tuple_element_90;
        PyObject *tmp_expression_value_205;
        PyObject *tmp_assattr_target_51;
        tmp_expression_value_205 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_205 == NULL)) {
            tmp_expression_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_205 == NULL));
        tmp_tuple_element_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_205, mod_consts[139]);
        if (tmp_tuple_element_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_51 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_expression_value_206;
            PyObject *tmp_expression_value_207;
            PyObject *tmp_expression_value_208;
            PyObject *tmp_expression_value_209;
            PyTuple_SET_ITEM(tmp_assattr_value_51, 0, tmp_tuple_element_90);
            tmp_expression_value_206 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_206 == NULL)) {
                tmp_expression_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_206 == NULL));
            tmp_tuple_element_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_206, mod_consts[119]);
            if (tmp_tuple_element_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;

                goto tuple_build_exception_60;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_51, 1, tmp_tuple_element_90);
            tmp_expression_value_207 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_207 == NULL)) {
                tmp_expression_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_207 == NULL));
            tmp_tuple_element_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_207, mod_consts[194]);
            if (tmp_tuple_element_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;

                goto tuple_build_exception_60;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_51, 2, tmp_tuple_element_90);
            tmp_expression_value_208 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_208 == NULL)) {
                tmp_expression_value_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_208 == NULL));
            tmp_tuple_element_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_208, mod_consts[194]);
            if (tmp_tuple_element_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;

                goto tuple_build_exception_60;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_51, 3, tmp_tuple_element_90);
            tmp_expression_value_209 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_209 == NULL)) {
                tmp_expression_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_209 == NULL));
            tmp_tuple_element_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_209, mod_consts[118]);
            if (tmp_tuple_element_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;

                goto tuple_build_exception_60;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_51, 4, tmp_tuple_element_90);
            tmp_tuple_element_90 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[189]);

            if (unlikely(tmp_tuple_element_90 == NULL)) {
                tmp_tuple_element_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[189]);
            }

            if (tmp_tuple_element_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;

                goto tuple_build_exception_60;
            }
            PyTuple_SET_ITEM0(tmp_assattr_value_51, 5, tmp_tuple_element_90);
        }
        goto tuple_build_noexception_60;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_60:;
        Py_DECREF(tmp_assattr_value_51);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_60:;
        tmp_assattr_target_51 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[247]);

        if (unlikely(tmp_assattr_target_51 == NULL)) {
            tmp_assattr_target_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[247]);
        }

        assert(!(tmp_assattr_target_51 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_51, mod_consts[209], tmp_assattr_value_51);
        Py_DECREF(tmp_assattr_value_51);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_expression_value_210;
        PyObject *tmp_expression_value_211;
        tmp_expression_value_211 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_211 == NULL)) {
            tmp_expression_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_210 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_211, mod_consts[206]);
        if (tmp_expression_value_210 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_155 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_210, mod_consts[248]);
        Py_DECREF(tmp_expression_value_210);
        if (tmp_assign_source_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assattr_value_52;
        PyObject *tmp_tuple_element_91;
        PyObject *tmp_expression_value_212;
        PyObject *tmp_assattr_target_52;
        tmp_expression_value_212 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_212 == NULL)) {
            tmp_expression_value_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_212 == NULL));
        tmp_tuple_element_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_212, mod_consts[214]);
        if (tmp_tuple_element_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_52 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_213;
            PyTuple_SET_ITEM(tmp_assattr_value_52, 0, tmp_tuple_element_91);
            tmp_expression_value_213 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_213 == NULL)) {
                tmp_expression_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_213 == NULL));
            tmp_tuple_element_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_213, mod_consts[215]);
            if (tmp_tuple_element_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;

                goto tuple_build_exception_61;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_52, 1, tmp_tuple_element_91);
        }
        goto tuple_build_noexception_61;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_61:;
        Py_DECREF(tmp_assattr_value_52);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_61:;
        tmp_assattr_target_52 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[249]);

        if (unlikely(tmp_assattr_target_52 == NULL)) {
            tmp_assattr_target_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[249]);
        }

        assert(!(tmp_assattr_target_52 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_52, mod_consts[209], tmp_assattr_value_52);
        Py_DECREF(tmp_assattr_value_52);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_53;
        PyObject *tmp_expression_value_214;
        PyObject *tmp_assattr_target_53;
        tmp_expression_value_214 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_214 == NULL)) {
            tmp_expression_value_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_214 == NULL));
        tmp_assattr_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_214, mod_consts[219]);
        if (tmp_assattr_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_53 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[249]);

        if (unlikely(tmp_assattr_target_53 == NULL)) {
            tmp_assattr_target_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[249]);
        }

        if (tmp_assattr_target_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_53);

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_53, mod_consts[210], tmp_assattr_value_53);
        Py_DECREF(tmp_assattr_value_53);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_54;
        PyObject *tmp_assattr_target_54;
        tmp_assattr_value_54 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_assattr_value_54 == NULL)) {
            tmp_assattr_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[204]);
        }

        if (tmp_assattr_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_54 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[249]);

        if (unlikely(tmp_assattr_target_54 == NULL)) {
            tmp_assattr_target_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[249]);
        }

        if (tmp_assattr_target_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_54, mod_consts[211], tmp_assattr_value_54);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_expression_value_215;
        PyObject *tmp_expression_value_216;
        tmp_expression_value_216 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_216 == NULL)) {
            tmp_expression_value_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_216 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_215 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_216, mod_consts[206]);
        if (tmp_expression_value_215 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_156 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_215, mod_consts[250]);
        Py_DECREF(tmp_expression_value_215);
        if (tmp_assign_source_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assattr_value_55;
        PyObject *tmp_tuple_element_92;
        PyObject *tmp_expression_value_217;
        PyObject *tmp_assattr_target_55;
        tmp_expression_value_217 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_217 == NULL)) {
            tmp_expression_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_217 == NULL));
        tmp_tuple_element_92 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_217, mod_consts[146]);
        if (tmp_tuple_element_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_55 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assattr_value_55, 0, tmp_tuple_element_92);
        tmp_assattr_target_55 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[251]);

        if (unlikely(tmp_assattr_target_55 == NULL)) {
            tmp_assattr_target_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[251]);
        }

        assert(!(tmp_assattr_target_55 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_55, mod_consts[209], tmp_assattr_value_55);
        Py_DECREF(tmp_assattr_value_55);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_56;
        PyObject *tmp_expression_value_218;
        PyObject *tmp_assattr_target_56;
        tmp_expression_value_218 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_218 == NULL)) {
            tmp_expression_value_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_218 == NULL));
        tmp_assattr_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_218, mod_consts[119]);
        if (tmp_assattr_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_56 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[251]);

        if (unlikely(tmp_assattr_target_56 == NULL)) {
            tmp_assattr_target_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[251]);
        }

        if (tmp_assattr_target_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_56);

            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_56, mod_consts[210], tmp_assattr_value_56);
        Py_DECREF(tmp_assattr_value_56);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_57;
        PyObject *tmp_assattr_target_57;
        tmp_assattr_value_57 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_assattr_value_57 == NULL)) {
            tmp_assattr_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[204]);
        }

        if (tmp_assattr_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_57 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[251]);

        if (unlikely(tmp_assattr_target_57 == NULL)) {
            tmp_assattr_target_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[251]);
        }

        if (tmp_assattr_target_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_57, mod_consts[211], tmp_assattr_value_57);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_called_value_21;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[251]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[251]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        frame_7ad8e8a6934ef6906a605a204cd76687->m_frame.f_lineno = 338;
        tmp_assign_source_157 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_21, mod_consts[252]);

        if (tmp_assign_source_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_157);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_expression_value_219;
        PyObject *tmp_expression_value_220;
        tmp_expression_value_220 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_220 == NULL)) {
            tmp_expression_value_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_220 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto try_except_handler_19;
        }
        tmp_expression_value_219 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_220, mod_consts[206]);
        if (tmp_expression_value_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto try_except_handler_19;
        }
        tmp_assign_source_158 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_219, mod_consts[254]);
        Py_DECREF(tmp_expression_value_219);
        if (tmp_assign_source_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assattr_value_58;
        PyObject *tmp_tuple_element_93;
        PyObject *tmp_expression_value_221;
        PyObject *tmp_assattr_target_58;
        tmp_expression_value_221 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_221 == NULL)) {
            tmp_expression_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_221 == NULL));
        tmp_tuple_element_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_221, mod_consts[118]);
        if (tmp_tuple_element_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto try_except_handler_19;
        }
        tmp_assattr_value_58 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_222;
            PyObject *tmp_expression_value_223;
            PyObject *tmp_expression_value_224;
            PyTuple_SET_ITEM(tmp_assattr_value_58, 0, tmp_tuple_element_93);
            tmp_expression_value_222 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_222 == NULL)) {
                tmp_expression_value_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_222 == NULL));
            tmp_tuple_element_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_222, mod_consts[119]);
            if (tmp_tuple_element_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;

                goto tuple_build_exception_62;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_58, 1, tmp_tuple_element_93);
            tmp_expression_value_223 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_223 == NULL)) {
                tmp_expression_value_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_223 == NULL));
            tmp_tuple_element_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_223, mod_consts[167]);
            if (tmp_tuple_element_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;

                goto tuple_build_exception_62;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_58, 2, tmp_tuple_element_93);
            tmp_expression_value_224 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_224 == NULL)) {
                tmp_expression_value_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            assert(!(tmp_expression_value_224 == NULL));
            tmp_tuple_element_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_224, mod_consts[144]);
            if (tmp_tuple_element_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;

                goto tuple_build_exception_62;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_58, 3, tmp_tuple_element_93);
        }
        goto tuple_build_noexception_62;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_62:;
        Py_DECREF(tmp_assattr_value_58);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_62:;
        tmp_assattr_target_58 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[254]);

        if (unlikely(tmp_assattr_target_58 == NULL)) {
            tmp_assattr_target_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[254]);
        }

        assert(!(tmp_assattr_target_58 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_58, mod_consts[209], tmp_assattr_value_58);
        Py_DECREF(tmp_assattr_value_58);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_19;
        }
    }
    {
        PyObject *tmp_assattr_value_59;
        PyObject *tmp_expression_value_225;
        PyObject *tmp_assattr_target_59;
        tmp_expression_value_225 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_225 == NULL)) {
            tmp_expression_value_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_225 == NULL));
        tmp_assattr_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_225, mod_consts[219]);
        if (tmp_assattr_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto try_except_handler_19;
        }
        tmp_assattr_target_59 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[254]);

        if (unlikely(tmp_assattr_target_59 == NULL)) {
            tmp_assattr_target_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[254]);
        }

        if (tmp_assattr_target_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_59);

            exception_lineno = 347;

            goto try_except_handler_19;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_59, mod_consts[210], tmp_assattr_value_59);
        Py_DECREF(tmp_assattr_value_59);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto try_except_handler_19;
        }
    }
    {
        PyObject *tmp_assattr_value_60;
        PyObject *tmp_assattr_target_60;
        tmp_assattr_value_60 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_assattr_value_60 == NULL)) {
            tmp_assattr_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[204]);
        }

        if (tmp_assattr_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto try_except_handler_19;
        }
        tmp_assattr_target_60 = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[254]);

        if (unlikely(tmp_assattr_target_60 == NULL)) {
            tmp_assattr_target_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[254]);
        }

        if (tmp_assattr_target_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto try_except_handler_19;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_60, mod_consts[211], tmp_assattr_value_60);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto try_except_handler_19;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_19 == NULL) {
        exception_keeper_tb_19 = MAKE_TRACEBACK(frame_7ad8e8a6934ef6906a605a204cd76687, exception_keeper_lineno_19);
    } else if (exception_keeper_lineno_19 != 0) {
        exception_keeper_tb_19 = ADD_TRACEBACK(exception_keeper_tb_19, frame_7ad8e8a6934ef6906a605a204cd76687, exception_keeper_lineno_19);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_19, &exception_keeper_value_19, &exception_keeper_tb_19);
    // Tried code:
    {
        bool tmp_condition_result_25;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_7 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_25 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_159;


        tmp_assign_source_159 = MAKE_FUNCTION_pystray$_util$win32$$$function__2_ChangeWindowMessageFilterEx();

        UPDATE_STRING_DICT1(moduledict_pystray$_util$win32, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_159);
    }
    goto branch_end_19;
    branch_no_19:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 342;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_7ad8e8a6934ef6906a605a204cd76687->m_frame) frame_7ad8e8a6934ef6906a605a204cd76687->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_20;
    branch_end_19:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_7;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_7:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_7;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7ad8e8a6934ef6906a605a204cd76687, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ad8e8a6934ef6906a605a204cd76687->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ad8e8a6934ef6906a605a204cd76687, exception_lineno);
    }



    assertFrameObject(frame_7ad8e8a6934ef6906a605a204cd76687);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_7:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pystray._util.win32", false);

    Py_INCREF(module_pystray$_util$win32);
    return module_pystray$_util$win32;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pystray$_util$win32, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pystray$_util$win32", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
