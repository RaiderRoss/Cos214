# Variables
PROJECT_NAME = u23571561
SRCDIR = src
BUILDDIR = build
BINDIR = bin
DOCSDIR = docs
COVERAGEDIR = coverage
TARGET = $(BINDIR)/$(PROJECT_NAME)
ZIP_FILE_NAME = $(PROJECT_NAME).zip
TEMP_DIR = temp
DOXYFILE = Doxyfile

# Include directories (add all the folders with header files)
INCLUDES = -I$(SRCDIR)

# Find all .cpp and .h files recursively
SOURCES = $(shell find $(SRCDIR) -name '*.cpp')
OBJECTS = $(patsubst $(SRCDIR)/%.cpp, $(BUILDDIR)/%.o, $(SOURCES))

# Compile with C++17 standard and coverage flags
CXXFLAGS += -std=c++17 -fprofile-arcs -ftest-coverage
LDFLAGS += -fprofile-arcs -ftest-coverage

# Compile and link the program
$(TARGET): $(OBJECTS)
	@mkdir -p $(BINDIR)
	$(CXX) $(OBJECTS) $(LDFLAGS) -o $(TARGET)

# Compile each .cpp file into an object file
$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(INCLUDES)

# Clean build and coverage files
clean:
	@rm -rf $(BUILDDIR)/* $(BINDIR)/* $(COVERAGEDIR)/*

# Run the compiled project
run: $(TARGET)
	@$(TARGET) > aidan.txt

# Check memory leaks using leaks on macOS or valgrind on Linux
leaks: $(TARGET)
	valgrind --leak-check=full --track-origins=yes $(TARGET); 
  
# Setup initial project structure with necessary folders
setup:
	@mkdir -p $(SRCDIR) $(BUILDDIR) $(BINDIR) $(DOCSDIR)
	@echo '#include <iostream>' > $(SRCDIR)/main.cpp
	@echo '' >> $(SRCDIR)/main.cpp
	@echo 'int main() {' >> $(SRCDIR)/main.cpp
	@echo '    std::cout << "Hello, World!" << std::endl;' >> $(SRCDIR)/main.cpp
	@echo '    return 0;' >> $(SRCDIR)/main.cpp
	@echo '}' >> $(SRCDIR)/main.cpp
	@echo "Project setup complete!"

# Doxygen Setup
doxygen:
	@if [ ! -f $(DOXYFILE) ]; then \
	    doxygen -g $(DOXYFILE); \
	    echo "Doxygen configuration file created at $(DOXYFILE)"; \
	fi

# Generate Doxygen documentation
docs: doxygen
	@mkdir -p $(DOCSDIR)
	doxygen $(DOXYFILE)

# Clean Doxygen documentation
clean-docs:
	@rm -rf $(DOCSDIR)/*

# Create new class with header and source files
class:
	@if [ "$(CLASS)" = "" ]; then \
	    class_path=$(subst src/,,$(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))); \
	else \
	    class_path=$(CLASS); \
	fi; \
	if echo "$$class_path" | grep -q '/'; then \
	    dir_path=$(SRCDIR)/$$(dirname $$class_path); \
	    class_name=$$(basename $$class_path); \
	else \
	    dir_path=$(SRCDIR); \
	    class_name=$$class_path; \
	fi; \
	mkdir -p $$dir_path; \
	header_file=$$dir_path/$$class_name.h; \
	source_file=$$dir_path/$$class_name.cpp; \
	header_guard=$$(echo "$$class_name" | tr '[:lower:]' '[:upper:]')_H; \
	if [ ! -f $$header_file ]; then \
	    echo "Creating $$header_file"; \
	    echo "#ifndef $$header_guard" > $$header_file; \
	    echo "#define $$header_guard" >> $$header_file; \
	    echo "" >> $$header_file; \
	    echo "class $$class_name {" >> $$header_file; \
	    echo "public:" >> $$header_file; \
	    echo "    $$class_name();" >> $$header_file; \
	    echo "    ~$$class_name();" >> $$header_file; \
	    echo "};" >> $$header_file; \
	    echo "" >> $$header_file; \
	    echo "#endif // $$header_guard" >> $$header_file; \
	else \
	    echo "Header file already exists: $$header_file"; \
	fi; \
	if [ ! -f $$source_file ]; then \
	    echo "Creating $$source_file"; \
	    echo "#include \"$$class_name.h\"" > $$source_file; \
	    echo "" >> $$source_file; \
	    echo "$$class_name::$$class_name() {}" >> $$source_file; \
	    echo "$$class_name::~$$class_name() {}" >> $$source_file; \
	else \
	    echo "Source file already exists: $$source_file"; \
	fi; \
	exit 0

# Run tests and generate coverage report
coverage: $(TARGET)
	@mkdir -p coverage # Ensure the coverage directory exists
	@$(TARGET) # Run the compiled program
	@gcovr -r . --html --html-details -o coverage/index.html # Generate HTML report in the coverage directory
	@gcovr -r . --print-summary # Print detailed coverage summary to the terminal
	@echo "Coverage report generated in the 'coverage' directory."

# Ignore other Makefile goals when using "make class"
%:
	@:

# Modified zip command to remove context from #include paths
# Modified zip command with new simple Makefile
zip:
	@mkdir -p $(TEMP_DIR)/$(PROJECT_NAME)
	# Find all .cpp and .h files and copy them into the temp directory
	@find $(SRCDIR) -type f \( -name '*.cpp' -o -name '*.h' \) -exec cp {} $(TEMP_DIR)/$(PROJECT_NAME) \;
	# Process each file to modify #include statements by stripping the path
	@find $(TEMP_DIR)/$(PROJECT_NAME) -type f \( -name '*.cpp' -o -name '*.h' \) -exec sed -i '' -E 's|#include "(.*)/([^/]+)"|#include "\2"|' {} \;
	# Create a simple Makefile inside the zip folder (corrected to run)
	@echo 'CXX = g++' > $(TEMP_DIR)/$(PROJECT_NAME)/Makefile
	@echo 'PROJECT_NAME = $(PROJECT_NAME)' >> $(TEMP_DIR)/$(PROJECT_NAME)/Makefile
	@echo 'TARGET = $$(PROJECT_NAME)' >> $(TEMP_DIR)/$(PROJECT_NAME)/Makefile
	@echo 'SOURCES = $$(wildcard *.cpp)' >> $(TEMP_DIR)/$(PROJECT_NAME)/Makefile
	@echo 'OBJECTS = $$(SOURCES:.cpp=.o)' >> $(TEMP_DIR)/$(PROJECT_NAME)/Makefile
	@echo '' >> $(TEMP_DIR)/$(PROJECT_NAME)/Makefile
	@echo 'all: $$(TARGET)' >> $(TEMP_DIR)/$(PROJECT_NAME)/Makefile
	@echo '' >> $(TEMP_DIR)/$(PROJECT_NAME)/Makefile
	@echo '%.o: %.cpp' >> $(TEMP_DIR)/$(PROJECT_NAME)/Makefile
	@echo '	$$(CXX) -std=c++17 -c $$< -o $$@' >> $(TEMP_DIR)/$(PROJECT_NAME)/Makefile
	@echo '' >> $(TEMP_DIR)/$(PROJECT_NAME)/Makefile
	@echo '$$(TARGET): $$(OBJECTS)' >> $(TEMP_DIR)/$(PROJECT_NAME)/Makefile
	@echo '	$$(CXX) -std=c++17 -o $$(TARGET) $$(OBJECTS)' >> $(TEMP_DIR)/$(PROJECT_NAME)/Makefile
	@echo '' >> $(TEMP_DIR)/$(PROJECT_NAME)/Makefile
	@echo 'clean:' >> $(TEMP_DIR)/$(PROJECT_NAME)/Makefile
	@echo '	rm -f $$(OBJECTS) $$(TARGET)' >> $(TEMP_DIR)/$(PROJECT_NAME)/Makefile
	@echo '' >> $(TEMP_DIR)/$(PROJECT_NAME)/Makefile
	@echo 'run: all' >> $(TEMP_DIR)/$(PROJECT_NAME)/Makefile
	@echo '	./$$(TARGET)' >> $(TEMP_DIR)/$(PROJECT_NAME)/Makefile

	# Zip the project folder with all .cpp and .h files and the Makefile
	@cd $(TEMP_DIR) && zip -r ../$(ZIP_FILE_NAME) $(PROJECT_NAME)/*
	# Clean up
	@rm -rf $(TEMP_DIR)

# Create or overwrite .gitignore file
gitignore:
	@echo "# Ignore prerequisites" > .gitignore
	@echo "*.d" >> .gitignore
	@echo "" >> .gitignore

	@echo "# Compiled object files" >> .gitignore
	@echo "*.slo" >> .gitignore
	@echo "*.lo" >> .gitignore
	@echo "*.o" >> .gitignore
	@echo "*.obj" >> .gitignore
	@echo "" >> .gitignore

	@echo "# Precompiled headers" >> .gitignore
	@echo "*.gch" >> .gitignore
	@echo "*.pch" >> .gitignore
	@echo "" >> .gitignore

	@echo "# Compiled dynamic libraries" >> .gitignore
	@echo "*.so" >> .gitignore
	@echo "*.dylib" >> .gitignore
	@echo "*.dll" >> .gitignore
	@echo "" >> .gitignore

	@echo "# Fortran module files" >> .gitignore
	@echo "*.mod" >> .gitignore
	@echo "*.smod" >> .gitignore
	@echo "" >> .gitignore

	@echo "# Compiled static libraries" >> .gitignore
	@echo "*.lai" >> .gitignore
	@echo "*.la" >> .gitignore
	@echo "*.a" >> .gitignore
	@echo "*.lib" >> .gitignore
	@echo "" >> .gitignore

	@echo "# Executables" >> .gitignore
	@echo "*.exe" >> .gitignore
	@echo "*.out" >> .gitignore
	@echo "*.app" >> .gitignore
	@echo "" >> .gitignore

	@echo "# Build and binary directories" >> .gitignore
	@echo "build/" >> .gitignore
	@echo "bin/" >> .gitignore
	@echo "" >> .gitignore

	@echo "# Coverage files" >> .gitignore
	@echo "*.gcno" >> .gitignore
	@echo "*.gcda" >> .gitignore
	@echo "coverage/" >> .gitignore
	@echo "" >> .gitignore

	@echo "# Other files" >> .gitignore
	@echo "*.log" >> .gitignore
	@echo "*.swp" >> .gitignore
	@echo "*.bak" >> .gitignore
	@echo "*~" >> .gitignore
	@echo "/.vscode" >> .gitignore
	@echo "/submit" >> .gitignore
	@echo "*.zip" >> .gitignore
	@echo ".DS_Store" >> .gitignore
	@echo "" >> .gitignore

	@echo "# Ignore Makefile" >> .gitignore
	@echo "Makefile" >> .gitignore
	@echo "makefile" >> .gitignore
	@echo "" >> .gitignore

	@echo "# Ignore Doxygen output" >> .gitignore
	@echo "docs/html" >> .gitignore
	@echo "docs/latex" >> .gitignore

# Help command
help:
	@echo "Makefile Help:"
	@echo ""
	@echo "Targets:"
	@echo "  setup          - Set up initial project structure with necessary folders and main.cpp."
	@echo "  class          - Create a new class with header and source files. Syntax: make class ClassName or make class Directory.ClassName."
	@echo "  run            - Compile and run the project."
	@echo "  coverage       - Compile the project, run the tests, and generate a coverage report in 'coverage' folder."
	@echo "  zip            - Zip all files and folders in src and include a simple Makefile."
	@echo "  clean          - Clean build artifacts (object files, executables, coverage files, and build directories)."
	@echo "  doxygen        - Set up Doxygen configuration file."
	@echo "  docs           - Generate Doxygen documentation."
	@echo "  clean-docs     - Clean Doxygen documentation."
	@echo "  leaks          - Check for memory leaks using leaks on macOS."

# Phony targets
.PHONY: setup class run zip clean help doxygen docs clean-docs coverage leaks