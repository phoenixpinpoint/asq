test:
	gcc ./tests/test.c -o ./tests/test;
	./tests/test;

memtest:
	gcc ./tests/test.c -o ./tests/test;
	valgrind --leak-check=full ./tests/test;

clean:
	rm -rf ./tests/test;
