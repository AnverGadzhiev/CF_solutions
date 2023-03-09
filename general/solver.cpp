#include "solver.h"

template <class OutputData, class InputData>
void slv::Solver::SolveTheProblem(const int& test_cases_quantity) {
    for (int test_case_number = 1; test_case_number <= test_cases_quantity; ++test_case_number) {
        slv::Solver::PrintSolution(
            slv::Solver::OneCaseSolution<OutputData, InputData>(const (slv::Solver::ReadTestCaseFromStream(std::cout))& inp));
    }
}

template <typename T> TypeWrapper& slv::TypeWrapper::operator=(T& other);
;

// template <typename T> TypeWrapper& slv::TypeWrapper<T>::operator=();