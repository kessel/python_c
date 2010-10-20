
%module espresso
%include "/Applications/Inkscape.app/Contents/Resources/python/site-packages/i386/2.5/numpy/doc/swig/numpy.i"
%init %{
  import_array();
%}

%apply ( double* IN_ARRAY1, int DIM1 ) { (double* p_box_l, int n) }
int setmd_box_l(double* p_box_l);

