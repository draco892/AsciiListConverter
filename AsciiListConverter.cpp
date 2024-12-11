#include <iostream>
#include <sstream>
#include <string>

int main() {
    // Input dei valori ASCII
    std::string input = "36 31 36 31 34 32 33 30 33 30 33 39 33 36 34 42 33 31 35 34 34 34 33 30 33 30 35 33 33 30 33 30 33 30 33 30 33 34 34 35 33 33 33 38 33 36 33 37 33 33 33 36 33 34 33 34 33 31 33 34 34 34 34 32 33 38 33 38 33 37 33 38 33 39 33 30 33 34 33 38 34 32 33 30 33 34 34 31 33 33 33 31 33 31 33 31 33 34 33 32 33 37 34 36 34 36 34 33 33 32 33 39 33 32 34 36 33 32 33 33 33 39 33 35 33 34 33 37 34 32 33 38 33 33 33 30 33 33 33 31 34 34 34 35 33 38 33 30 33 35 34 32 33 33 34 31 33 31 33 37 33 30 34 32 33 34 33 31 33 37 34 33 34 32 34 35 34 34 33 39 34 32 33 31 34 34 33 30 33 38 33 39 33 34 34 32 37 44";

    // Creazione di uno stream per elaborare l'input
    std::istringstream iss(input);
    std::string value;

    // Elaborazione e stampa del risultato
    while (iss >> value) {
        int ascii_code = std::stoi(value); // Converte il valore in intero
        char character = static_cast<char>(ascii_code); // Converte in carattere ASCII
        std::cout << value << "\t|\t" << character << std::endl;
    }

    return 0;
}
