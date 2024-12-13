# AsciiListConverter

## Description
AsciiListConverter is a simple C++ program that reads a file containing numeric ASCII codes as input and converts them into their corresponding ASCII characters. The program processes a sequence of space-separated integers from the file and outputs a table showing the ASCII code alongside its corresponding character to a file named `output.txt`.

## Features
- Reads numeric ASCII codes from an input file.
- Converts numeric ASCII codes into characters.
- Outputs the input code and the corresponding character in a clear, tabular format to `output.txt`.
- Simple and lightweight, suitable for quick ASCII lookups or educational purposes.

## How It Works
1. **Input**: The program accepts the path to an input file containing space-separated numeric ASCII values as a command-line argument.
2. **Processing**: Each value is converted from a string to an integer and then to its corresponding ASCII character.
3. **Output**: The program writes each ASCII value alongside its character to an output file named `output.txt`.

### Example
#### Input File (input.txt):
```
36 31 36 31 34 32 33 30 33 30 33 39 33 36 34 42
```

#### Output File (output.txt):
```
36      |       6
31      |       1
36      |       6
31      |       1
34      |       4
32      |       2
33      |       3
30      |       0
33      |       3
30      |       0
33      |       3
39      |       9
33      |       3
36      |       6
34      |       4
42      |       B
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
3. Run the program, providing the path to the input file as an argument:
   ```
   ./ascii_converter input.txt
   ```

### Running the Program
- Ensure the input file exists and contains space-separated ASCII codes.
- Run the program with the input file path as a command-line argument.
- View the output in the `output.txt` file generated in the same directory as the program.

## Return Values
The program uses the following return values to indicate execution status:
- `0`: No error (execution successful).
- `-1`: Input file does not exist.
- `-2`: Unable to create the output file.
- `-3`: Invalid parameters (e.g., missing input file path).

## License
This program is open-source under the MIT license and can be used for educational and non-commercial purposes.

## Author
draco892

