#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter text (type 'exit' to quit):" << std::endl;

    while (true) {
        std::getline(std::cin, input);
        if (input == "exit") {
            break;
        }

        std::istringstream stream(input);
        std::string word;
        int wordCount = 0;

        while (stream >> word) {
            wordCount++;
        }

        std::cout << "Word count: " << wordCount << std::endl;
    }

    return 0;
}

