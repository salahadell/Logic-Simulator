#include <iostream>
#include "Simulator.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <input file>" << std::endl;
        return 1;
    }

    Simulator S;
    S.load(argv[1]);

    // Wait for user input before closing
    std::cout << "Press Enter to exit...";
    std::cin.get();

    return 0;
}
