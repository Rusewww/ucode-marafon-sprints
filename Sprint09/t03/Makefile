all: clean copy MINILIBMX create_lib little_clean

copy:
	mkdir obj
	cp inc/*.h obj/
	cp src/*.c obj/

MINILIBMX: object.o

object.o:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/*.c

create_lib:
	ar -rc minilibmx.a *.o
	ranlib minilibmx.a
	cp *.o obj/

little_clean:
	rm *.o
	rm obj/*.h
	rm obj/*.c

clean:
	rm -rf obj

uninstall:
	make clean
	rm *.a

reinstall:
	make uninstall
	make