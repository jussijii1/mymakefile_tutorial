CC = gcc

hello:
	echo "Hello, World"
blah:
	$(CC) src/blah.c -o bin/blah
clean:
	rm -f bin/*