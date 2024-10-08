CC = g++
CFLAGS = -fdiagnostics-color=always -g
OUTPUT_DIR = output

DEMO_SRCS = $(filter-out TestingMain.cpp UnitTestingMain.cpp, $(wildcard *.cpp))
UNIT_TEST_SRCS = $(filter-out demoMain.cpp TestingMain.cpp, $(wildcard *.cpp))
TEST_SRCS = $(filter-out demoMain.cpp UnitTestingMain.cpp, $(wildcard *.cpp))


all: demo test

demo:
	./demoMain

demoReset:
	rm -f demoMain && $(CC) $(CFLAGS) $(DEMO_SRCS) -o demoMain

testReset:
	rm -f UnitTestingMain && $(CC) $(CFLAGS) $(UNIT_TEST_SRCS) -o UnitTestingMain

testCov:
	rm -f TestingMain && $(CC) $(CFLAGS) --coverage $(TEST_SRCS) -o TestingMain && ./TestingMain
	mkdir -p $(OUTPUT_DIR)
	mv *.gcno $(OUTPUT_DIR) || true
	mv *.gcda $(OUTPUT_DIR) || true
	gcov -o $(OUTPUT_DIR) $(OUTPUT_DIR)/*.gcda || true
	mv *.gcov $(OUTPUT_DIR) || true
	gcovr -r . --html --html-details -o html/coverage.html

clean:
	rm -f demoMain TestingMain UnitTestingMain *.gcda $(OUTPUT_DIR)/*.gcda $(OUTPUT_DIR)/*.gcno $(OUTPUT_DIR)/*.gcov html/search/* latex/* html/*.html html/*.css html/*.js html/*.png html/*.dot

valgrind:
	valgrind --leak-check=full ./TestingMain
run: 
	rm -f TestingMain && $(CC) $(CFLAGS) $(TEST_SRCS) -o TestingMain && ./TestingMain

