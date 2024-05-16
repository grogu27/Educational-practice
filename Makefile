all:
	$(MAKE) -C src

clean:
	$(MAKE) -C src clean
	rm -rf bin

build:
	mkdir -p bin
	cc -o bin/main main.c lib/libmy_string_lib.a

run:
	cd bin && ./main