

INTERFACE=$(wildcard *.i)
SOURCE=$(patsubst %.i,%.c,${INTERFACE})
OBJ=$(patsubst %.c,%.o,${SOURCE})
INTERFACE_SOURCE=$(patsubst %.i,%_wrap.c,${INTERFACE})
INTERFACE_OBJ=$(patsubst %.c,%.o,${INTERFACE_SOURCE})
CC=gcc
CPPFLAGS=-m32 -fPIC -I/Library/Frameworks/Python.framework/Headers/ -I/System/Library/Frameworks/Python.framework/Versions/2.6/Extras/lib/python/numpy/core/include/
LDFLAGS=-m32 -shared -flat_namespace -undefined suppress -L/opt/local/var/macports/software/python26/2.6.5_1+darwin/opt/local/Library/Frameworks/Python.framework/Versions/2.6/lib/python2.6/


all: python_lib

test:
	@echo ${INTERFACE}
	@echo ${SOURCE}
	@echo ${OBJ}
	@echo ${INTERFACE_SOURCE}
	@echo ${INTERFACE_OBJ}


bin: ${OBJ} main.o
	gcc ${OBJ} main.o -o Espresso_bin

python_lib: ${INTERFACE_SOURCE} ${INTERFACE_OBJ}  ${OBJ} 
	gcc ${LDFLAGS} ${OBJ} ${INTERFACE_OBJ} -o _espresso.so

%_wrap.c : %.i
	swig -python $< 

%_wrap.o : %_wrap.c
	${CC} ${CPPFLAGS} -c $< -o $@

%.o : %.c
	${CC} ${CPPFLAGS} -c $< -o $@

