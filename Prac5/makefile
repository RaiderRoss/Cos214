CC = g++
CFLAGS = -fdiagnostics-color=always -g
OUTPUT_DIR = output

DEMO_SRCS = $(filter-out TestingMain.cpp, $(wildcard *.cpp))
TEST_SRCS = $(filter-out demoMain.cpp, $(wildcard *.cpp))


all: demo test

demo:
	./demoMain

demoReset:
	rm -f demoMain && $(CC) $(CFLAGS) $(DEMO_SRCS) -o demoMain

testReset:
	rm -f TestingMain && $(CC) $(CFLAGS) $(TEST_SRCS) -o TestingMain
testCov:
	rm -f TestingMain && $(CC) $(CFLAGS) --coverage $(TEST_SRCS) -o TestingMain
	mkdir -p $(OUTPUT_DIR)
	mv *.gcno $(OUTPUT_DIR) || true
	mv *.gcda $(OUTPUT_DIR) || true
	gcov -o $(OUTPUT_DIR) $(OUTPUT_DIR)/*.gcda || true
	mv *.gcov $(OUTPUT_DIR) || true
	gcovr -r . --html --html-details -o html/coverage.html

clean:
	rm -f demoMain TestingMain *.gcda $(OUTPUT_DIR)/*.gcda $(OUTPUT_DIR)/*.gcno $(OUTPUT_DIR)/*.gcov html/search html/*dot html/*.html

valgrind:
	make testReset valgrind --leak-check=full ./TestingMain
	mkdir -p $(OUTPUT_DIR)
	mv *.gcda $(OUTPUT_DIR) || true

run: 
	make testReset && clear && ./TestingMain
	mkdir -p $(OUTPUT_DIR)
	mv *.gcda $(OUTPUT_DIR) || true

