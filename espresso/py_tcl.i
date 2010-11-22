
#include "py_tcl.h"
#include <tcl.h>

void tcl_init();

%exception tcl_eval {
  $action
  printf("%s", Tcl_GetStringResult(tcl_interp));
  if (result != 0) {
    PyErr_SetString(PyExc_SyntaxError,"TCL Error");
    return NULL;
  }
}
int tcl_eval(char* arg); 
