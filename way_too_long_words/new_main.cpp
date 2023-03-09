#include <iostream>
#include <string>
#include <sstream>

namespace prcs 
{    
    class Processor
    {
    private:
        static void AbbreviateWord( std::string& );
        static bool IsTooLong(const std::string& );
    public:
        static void ProcessWord( std::string& );
    };   
}

void prcs::Processor::ProcessWord(std::string& word) {
    if (IsTooLong(word)) {
        AbbreviateWord(word); 
    }
}

bool prcs::Processor::IsTooLong(const std::string& word) {
    if (word.length() > 10) {
        return true;
    }
    return false;
}

void prcs::Processor::AbbreviateWord(std::string& w) {
    std::stringstream abbreviation;
    abbreviation << w[0] << w.length() - 2 << w[w.length() - 1];
    w = abbreviation.str();
}


void TestWord(const std::string& w) {
    std::string word = w;
    prcs::Processor::ProcessWord(word);
    std::cout << word << std::endl;
}

int main() {
    std::string test_string;
    int t_quant;
    std::cin >> t_quant;

    for (int i = 0; i < t_quant; ++i) {
        // std::cin >> test_string;
        std::cin >> test_string;
        TestWord(test_string);
    }


    return 0;
}