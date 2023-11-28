#!/bin/bash

# Check if the PYCODE environment variable is set
if [ -z "$PYCODE" ]; then
	    echo "Error: PYCODE environment variable is not set."
	        exit 1
fi

# Create a temporary file to store the Python code
temp_file=$(mktemp "${TMPDIR:-/tmp}/python_code.XXXXXXXXXX.py")
echo "$PYCODE" > "$temp_file"

# Run the Python code
python3 "$temp_file"

# Remove the temporary file
rm -f "$temp_file"

