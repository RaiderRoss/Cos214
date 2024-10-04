CC = g++
CFLAGS = -fdiagnostics-color=always -g

DEMO_SRCS = $(filter-out TestingMain.cpp, $(wildcard *.cpp))
TEST_SRCS = $(filter-out demoMain.cpp, $(wildcard *.cpp))

.PHONY: all clean demo test

all: demo test

demo:
	rm -f demo && $(CC) $(CFLAGS) $(DEMO_SRCS) -o demo && ./demo

test:
	rm -f test && $(CC) $(CFLAGS) $(TEST_SRCS) -o test && ./test

clean:
	rm -f demo test
