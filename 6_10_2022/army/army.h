#include <iostream>

namespace army
{
template <class InputDataType>
class Reader
{
public : 
    static InputDataType ReadProblemInputData(); 
    static void DebugPrint();
};

//std::tuple<int, std::vector<int>, std::vector<int>>

template <class OutputDataType> 
class Answer
{
    OutputDataType answ_;
    RequestAnwer(); 


public:
    explicit Answer();
    friend std::ostream& operator<<(std::ostream& os, const Answer);
};

template <class InputDataType>
class Solver
{

};
}