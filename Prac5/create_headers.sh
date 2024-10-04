#!/bin/bash

# List of files to create
files=(
"alarm.h"
"door.h"
"fridge.h"
"light.h"
"thermostat.h"
)

for file in "${files[@]}"; do
    # Extract the base name without extension and convert to uppercase for the include guard
    base_name=$(basename "$file" .h)
    guard_name=$(echo "$base_name" | tr '[:lower:]' '[:upper:]')
echo "Creating header for file: ${base_name}."
    # Create the file with the include guard
echo "#ifndef ${guard_name}_H
#define ${guard_name}_H
#include 'device.h'
class ${base_name} : public device {
private:
protected:
public:
    virtual void getStatus();
    virtual void performAction();
    virtual void getDeviceType();
    virtual ~${base_name}();
};
#endif // ${guard_name}_H" > "$file"
echo "File created successfully."
done


