clean:
	rm -f main
demo:
	rm -f main && g++ -fdiagnostics-color=always -g demoMain.cpp -o main && clear && ./main
test:
	rm -f main && g++ -fdiagnostics-color=always -g TestingMain.cpp -o main && clear && ./main
valgrind:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s ./main
run:
	clear && ./main $(ARGS)