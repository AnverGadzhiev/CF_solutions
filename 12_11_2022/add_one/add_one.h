#include <vector>
#include <iostream>
#include <numeric>

template <typename T>
    void printVector(const std::vector<T>&);

long long sumIntVector(const std::vector<long long int>&);

void readAndRunTests();

// long long factorial(long long);  

long long nChooseK( long long n, long long k);

// long long combinations(long long, long long);

long long solveTheProblem(long long number, long long oper_quant);

void applyFewOperations(std::vector<long long>& digits, int oper_number);

long long lenAfterSomeOperations(long long number, long long oper_quant);
