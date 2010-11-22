
#include "py_tcl.h"

Tcl_Interp *tcl_interp = NULL;
  
void tcl_init()
{
    tcl_interp = Tcl_CreateInterp();
}

int tcl_eval(char* arg) {

  if (tcl_interp == NULL)
    tcl_init();

  return Tcl_Eval(tcl_interp, arg);
}
