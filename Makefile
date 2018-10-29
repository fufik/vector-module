CC	 := gcc
CFLAGS	 := -g -Wall
TARGET_D := libvmodule.so
TARGET_S := libvmodule.a

SRC	 := src
OBJ	 := obj
BIN	 := bin

${OBJ} ${BIN}:
	mkdir -p $@

SOURCES  := $(wildcard ${SRC}/*.c)
OBJECTS  := $(patsubst ${SRC}/%.c, ${OBJ}/%.o, ${SOURCES})

all:	${BIN} ${OBJ} ${BIN}/${TARGET_D} ${BIN}/${TARGET_S}
	${CC} ${CFLAGS} -L${BIN}/ -lvmodule -lm example.c -o ${BIN}/example
	
lib:	${BIN} ${OBJ} ${BIN}/${TARGET_D} ${BIN}/${TARGET_S}
	
${OBJ}/%.o: ${SRC}/%.c
	${CC} ${CFLAGS} -c $< -o $@

${BIN}/${TARGET_D}: ${OBJECTS}
	${CC} ${CFLAGS} -shared ${OBJECTS} -o ${BIN}/${TARGET_D} 

${BIN}/${TARGET_S}: ${OBJECTS}
	ar rcs ${BIN}/${TARGET_S} ${OBJECTS}


clean:
	rm -rf ${BIN}
	rm -rf ${OBJ}


.PHONY: clean all lib
