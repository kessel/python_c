
#include "particle.h"
double pos[3]; 
int particle_set_position(double p_pos[3]){
  pos[0]=p_pos[0];
  pos[1]=p_pos[1];
  pos[2]=p_pos[2];
}

int particle_get_position(double* p_pos){
  p_pos[0]=pos[0];
  p_pos[1]=pos[1];
  p_pos[2]=pos[2];
}
