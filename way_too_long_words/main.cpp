#include <iostream>
#include "word_processor/word_processor.h"
using namespace prcs;

void TestWord(const std::string& w) {
    std::string word = w;
    Processor::ProcessWord(word);
    std::cout << word;
}

int main() {
    std::string test_string;
    int t_quant;
    std::cin >> t_quant;

    for (int i = 0; i < t_quant; ++i) {
        // std::cin >> test_string;
        std::getline(std::cin, test_string);
        TestWord(test_string);
    }


    return 0;
}