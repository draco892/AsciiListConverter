#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

static const std::string outputFileName = "output.txt";

enum class ReturnValues : short int
{
    NO_INPUT_FILE = -1,
    IMPOSSIBLE_CREATE_OUTPUT_FILE = -2,
    INVALID_PARAMETERS = -3,
    NO_ERROR = 0
};

// Function that checks if the file exists
bool CheckIfFileExist(const std::ifstream& file)
{
    return file.is_open();
}

char ConvertToAscii(const std::string& input)
{
    // Convert string to integer
    int asciiValue;
    std::istringstream(input) >> asciiValue;

    // Return the corresponding ASCII character
    return static_cast<char>(asciiValue);
}

int main(int argc, char* argv[])
{
    // Parameter number check
    if (argc < 2)
    {
        std::cerr << "ERROR:\tno input file parameters\n";
        return static_cast<int>(ReturnValues::INVALID_PARAMETERS);
    }

    // Input file
    std::cout << "Input File Path:\t" << argv[1] << std::endl;

    std::ifstream inputFile(argv[1]);

    if (!CheckIfFileExist(inputFile))
    {
        std::cerr << "ERROR:\tno input file\n\t" << argv[1] << std::endl;
        return static_cast<int>(ReturnValues::NO_INPUT_FILE);
    }

    // Output file
    std::ofstream outputFile(outputFileName);
    if (!outputFile.is_open())
    {
        std::cerr << "ERROR:\timpossible to create output file\n";
        return static_cast<int>(ReturnValues::IMPOSSIBLE_CREATE_OUTPUT_FILE);
    }

    std::string inputFileLine;

    while (std::getline(inputFile, inputFileLine))
    {
        std::istringstream iss(inputFileLine);
        std::string value;

        while (iss >> value)
        {
            char asciiChar = ConvertToAscii(value);
            outputFile << value << "\t|\t" << asciiChar << std::endl;
        }
    }

    inputFile.close();
    outputFile.close();

    std::cout << "Output written to: " << outputFileName << std::endl;

    return static_cast<int>(ReturnValues::NO_ERROR);
}
