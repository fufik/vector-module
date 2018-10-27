CC=gcc
CFLAGS = -g -Wall
TARGET_D= libvmodule.so
TARGET_S= libvmodule.a

all:	lib
	${CC} ${CFLAGS} -Lbin/ -lvmodule example.c -o bin/example
	
mkdirs:
	if ! [ -d bin ];then mkdir bin;fi;
	if ! [ -d obj ];then mkdir obj;fi;

lib:	lib.so lib.a

lib_obj:mkdirs
	for FILE in src/*.c; do \
	  ${CC} ${CFLAGS} -c $${FILE} -o obj/$$(basename $${FILE%.c}).o; \
	done

lib.so: lib_obj
	${CC} ${CFLAGS} -shared obj/*.o -o bin/${TARGET_D} 

lib.a:	lib_obj
	ar rcs bin/${TARGET_S} obj/*.o

clean:
	rm -rf bin
	rm -rf obj


.PHONY: clean mkdirs all lib.so lib.a lib_obj lib
