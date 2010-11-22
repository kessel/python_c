
#include "particle_py.h"
#include "particle.h"

PyObject * _particle_get_position (PyObject* args){
  double pos[3];
  if (PyArg_ParseTuple(args, "fff", &pos[0], &pos[1], &pos[2])) {
    if (!particle_get_position(pos))
      return Py_None;
    else return NULL;
  }
}
