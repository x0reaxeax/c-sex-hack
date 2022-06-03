all: gcc

gcc:
	gcc -nostdlib -fno-stack-protector -no-pie \
    -Wl,--omagic this_will_never_work.c -o sex

clang:
	clang -nostdlib -no-pie -Wl,--omagic \
        this_will_never_work.c -o sex

tcc:
	tcc -nostdlib -c this_will_never_work.c
	ld -N this_will_never_work.o -o sex

clean:
	rm -f sex
