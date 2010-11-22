
%numpy_typemaps(double, NPY_DOUBLE, int)


%apply (double IN_ARRAY1[ANY]) {(double test[3])}
int setmd_box_l(double* test);

%apply (double ARGOUT_ARRAY1[ANY]) {(double p_box_l[3])};
int getmd_box_l(double p_box_l[3]);
