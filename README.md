# AsciiListConverter

## Description
AsciiListConverter is a simple C++ program that takes a string of numeric ASCII codes as input and converts them into their corresponding ASCII characters. The program is designed to process a sequence of space-separated integers and output a table showing the ASCII code alongside its corresponding character.

## Features
- Converts numeric ASCII codes into characters.
- Displays the input code and the corresponding character in a clear, tabular format.
- Simple and lightweight, suitable for quick ASCII lookups or educational purposes.

## How It Works
1. **Input**: The program accepts a space-separated string of numeric ASCII values as input.
2. **Processing**: Each value is converted from a string to an integer and then to its corresponding ASCII character.
3. **Output**: The program prints each ASCII value alongside its character in a formatted output.

### Example
#### Input:
```
36 31 36 31 34 32 33 30 33 30 33 39 33 36 34 42
```

#### Output:
```
36      | 6
31      | 1
36      | 6
31      | 1
34      | 4
32      | 2
33      | 3
30      | 0
33      | 3
30      | 0
33      | 3
39      | 9
33      | 3
36      | 6
34      | 4
42      | B
```

## Getting Started

### Prerequisites
- A C++ compiler that supports C++14 (e.g., GCC, Clang, or MSVC).

### Building the Program
1. Copy the code from the `ascii_converter.cpp` file into your development environment.
2. Compile the code using a C++ compiler. For example:
   ```
   g++ -std=c++14 -o ascii_converter ascii_converter.cpp
   ```
3. Run the program:
   ```
   ./ascii_converter
   ```

### Running the Program
- Enter the input string of ASCII codes when prompted.
- View the output table showing each code and its corresponding character.

## License
This program is open-source under MIT license and can be used for educational and non-commercial purposes.

## Author
draco892

