import os
import re

# Regex to match files named 'practical_{n}.c' where n is any number
pattern = re.compile(r"practical_(\d+)\.c")

# List all files in the current directory
for filename in os.listdir("."):
    # Check if the filename matches 'practical_{n}.c'
    match = pattern.match(filename)
    if match:
        # Extract the practical number from the filename
        practical_num = match.group(1)
        
        # Create the new filename in Turbo C-compatible format (8.3)
        new_filename = f"prac{practical_num}.c"
        
        # Rename the file
        os.rename(filename, new_filename)
        print(f"Renamed '{filename}' to '{new_filename}'")
