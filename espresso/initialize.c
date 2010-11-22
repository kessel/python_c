
#include "initialize.h"

double box_l[3];

int setmd_box_l(double p_box_l[3]) {
   box_l[0]=p_box_l[0];
   box_l[1]=p_box_l[1];
   box_l[2]=p_box_l[2];
   return 0;
}

int setmd_box_ll(double* p_box_l, int size ) {
  return setmd_box_l(p_box_l);
}

int getmd_box_l(double p_box_l[3]) {
   p_box_l[0]=box_l[0];
   p_box_l[1]=box_l[1];
   p_box_l[2]=box_l[2];
   return 0;
}

