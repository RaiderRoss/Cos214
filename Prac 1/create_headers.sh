#!/bin/bash

# List of files to create
files=(
"test.h"

)

for file in "${files[@]}"; do
    # Extract the base name without extension and convert to uppercase for the include guard
    base_name=$(basename "$file" .h)
    guard_name=$(echo "$base_name" | tr '[:lower:]' '[:upper:]')
echo "Creating header for file: ${base_name}."
    # Create the file with the include guard
echo -e"#ifndef ${guard_name}_H
#define ${guard_name}_H
class ${base_name} {
private:
protected:
public:
    //Default constructor
    ${base_name}();
    //Paramatised constructor
    ${base_name}(/*Parameters*/);
    //Deconstructor
    ~${base_name}();
};
#endif // ${guard_name}_H" > "$file"
echo "File created successfully."
done


