
all:	mkdirs
	gcc main.c -o bin/main
	
mkdirs:
	if ! [ -d bin ];then mkdir bin;fi;

clean:
	rm -rf bin
