CXX = g++
PROJECT_NAME = u23571561
TARGET = $(PROJECT_NAME)
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET)

%.o: %.cpp
	$(CXX) -std=c++17 -c $< -o $@

$(TARGET): $(OBJECTS)
	$(CXX) -std=c++17 -o $(TARGET) $(OBJECTS)

clean:
	rm -f $(OBJECTS) $(TARGET)

run: all
	./$(TARGET)
