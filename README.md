# ??? WTF C SEX ???
**GCC:**  
```
gcc -nostdlib -fno-stack-protector this_will_never_work.c -no-pie -Wl,--omagic
```
**clang:**  
```
clang -nostdlib this_will_never_work.c -no-pie -Wl,--omagic
```
**tcc:**  
```
tcc -nostdlib -c this_will_never_work.c
ld -N this_will_never_work.o
```
