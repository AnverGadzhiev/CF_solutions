#include "word_processor.h"

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