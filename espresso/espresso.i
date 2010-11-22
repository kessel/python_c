// -*- c++ -*-
%module espresso

%{
#define SWIG_FILE_WITH_INIT
%}

// Get the NumPy typemaps
%include "../numpy/doc/swig/numpy.i"

%init %{
  import_array();
%}

%include "initialize.i"
%include "py_tcl.i"

