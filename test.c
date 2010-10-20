#include <stdio.h>
//#include <Tcl/tcl.h>

//Tcl_Interp *interp;

int integrate(int n_steps) {
  int i;
  for (i=0; i<5; i++) {
    printf("%d\n", i);
  }
  return 4;
}

/*
int get_particle_position(int partid, double* pos) {
  pos[0] = 1.;
  pos[1] = 2.;
  pos[2] = 3.;
}

int divide(int a, int b, int* div, int* rem){
  if (b==0) {
    *div=*rem=0;
    return -1;
  }
  *div = a/b;
  *rem = a - a/b;
  return 0;
}
*/

/*
int tcl_init(){
  interp=Tcl_CreateInterp();
}
*/



