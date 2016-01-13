MKDIR=mkdir
RM=rm
CP=cp

all: dist

create-build-dir:
	$(MKDIR) -p build

create-dist-dir:
	$(MKDIR) -p dist

compile: create-build-dir
	$(CC) src/main.c -o build/demo

dist: create-dist-dir compile
	$(CP) build/demo dist/demo

clean:
	$(RM) -rf build
	$(RM) -rf dist
