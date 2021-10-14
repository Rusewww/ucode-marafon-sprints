flags := -std=c11 -Wall -Wextra -Werror -Wpedantic
name := read_file

all: lib

lib:
	clang $(flags) src/*.c -o $(name)

clean:
	rm -f $(name)

uninstall:
	rm -f $(name)

reinstall:
	make uninstall
	make
