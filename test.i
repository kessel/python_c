%module test
%include "exception.i"

%{
#define SWIG_FILE_WITH_INIT
#include "test.h"
%}

int integrate(int n_steps);
/*
%apply int* OUTPUT { int* div, int* rem };
%typemap(out) int ERRORCODE {
  if ($1 < 0) 
    SWIG_exception(SWIG_ValueError,"An Error occured.");
}
%apply int ERRORCODE { int }
int divide(int a, int b, int* div, int* rem);
*/
/*
int get_particle_position(int INPUT, double* pos);
*/

/*int tcl_init();*/

