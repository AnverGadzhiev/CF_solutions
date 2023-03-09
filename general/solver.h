#include <iostream>

namespace slv
{
template <typename T>
class TypeWrapper
{
    T Value;
    TypeWrapper& operator=(T& other);
    TypeWrapper& operator=(TypeWrapper& other);
public:
    TypeWrapper(const T& Val);
    T& GetValue();
    void SetVal(const T& SetedValue);
    friend std::ostream& operator<<(ostream&, const TypeWrapper& ); 
    
};

class Solver 
{
public:
    template <class OutputData, class InputData> static void SolveTheProblem(const int& test_cases);
    template <class OutputData, class InputData> static OutputData OneCaseSolution(const InputData&);
    template <class InputData>  friend InputData IOControler::ReadTestCaseFromStream(std::ostream&);
    template <class Answer> friend void IOControler::PrintSolution(std::ostream&, const Answer&);
};

class IOControler 
{
public:
    template <class InputData> static InputData ReadTestCaseFromStream(std::ostream&);
    template <class Answer> static void PrintSolution(std::ostream&, const Answer&);

};
}

