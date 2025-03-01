test:
	gcc ./tests/test.c -o ./tests/test;
	./tests/test;

clean:
	rm -rf ./tests/test;
