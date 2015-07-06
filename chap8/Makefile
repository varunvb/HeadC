encrypt.o: encrypt.c
	gcc -c encrypt.c -o encrypt.o
checksum.o: checksum.c
	gcc -c checksum.c -o checksum.o
libhfsecurity.a: encrypt.o checksum.o 
	ar -rcs libhfsecurity.a encrypt.o checksum.o
security_test: security_test.c libhfsecurity.a 
	gcc security_test.c -I . -L . -lhfsecurity -o security_test
