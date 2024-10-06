CC = g++
CFLAGS = -fdiagnostics-color=always -g

DEMO_SRCS = $(filter-out TestingMain.cpp, $(wildcard *.cpp))
TEST_SRCS = $(filter-out demoMain.cpp, $(wildcard *.cpp))

.PHONY: all clean demo test

all: demo test

demo:
	./demoMain
demoReset:
	rm -f demo && $(CC) $(CFLAGS) $(DEMO_SRCS) -o demoMain

test:
	clear && ./test
testReset:
	rm -f test && $(CC) $(CFLAGS) $(TEST_SRCS) -o test
clean:
	rm -f demoMain test
valgrind:
	valgrind --leak-check=full ./test
run:
	./test
