CC = g++
CFLAGS = -fdiagnostics-color=always -g --coverage
OUTPUT_DIR = output

DEMO_SRCS = $(filter-out TestingMain.cpp, $(wildcard *.cpp))
TEST_SRCS = $(filter-out demoMain.cpp, $(wildcard *.cpp))


all: demo test

demo:
	./demoMain

demoReset:
	rm -f demoMain && $(CC) $(CFLAGS) $(DEMO_SRCS) -o demoMain

test:
	clear && ./TestingMain

testReset:
	rm -f TestingMain && $(CC) $(CFLAGS) $(TEST_SRCS) -o TestingMain
	mkdir -p $(OUTPUT_DIR)
	mv *.gcno $(OUTPUT_DIR)

gcov: 
	mv *.gcda $(OUTPUT_DIR) || true
	gcov -o $(OUTPUT_DIR) $(OUTPUT_DIR)/*.gcda || true
	mv *.gcov $(OUTPUT_DIR) || true

html: gcov
	gcovr -r . --html --html-details -o html/coverage.html

clean:
	rm -f demoMain TestingMain $(OUTPUT_DIR)/*.gcda $(OUTPUT_DIR)/*.gcno $(OUTPUT_DIR)/*.gcov html/*.html

valgrind:
	valgrind --leak-check=full ./TestingMain

run:
	./TestingMain
