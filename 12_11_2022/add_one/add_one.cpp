#include "add_one.h"

template <typename T>
void printVector(const std::vector<T>& v) {
    for (T x: v) {
        std::cout << x << " ";
    }
    std::cout << "\n";
}

long long sumIntVector(const std::vector<long long int>& v) {
    long long sum = 0;
    for (int x : v) { sum += x; }
    return sum;
}

void readAndRunTests() {
    int cases_number = 0;
    std::cin >> cases_number;
    long long number = 0, oper_quant = 0;

    for (;cases_number --> 0;) {
        std::cin >> number >> oper_quant;
        std::cout << solveTheProblem(number, oper_quant) << "\n";
        // std::cout << "------------------------" << "\n";
    }
}

long long solveTheProblem(long long number, long long oper_quant) {
    return lenAfterSomeOperations(number, oper_quant);
}

/*
long long factorial(long long n) {
    if (n == 0) { return 1; }
    long long res = 1;
    for (;n-->1;) { res *=n; }
    return n;
}
*/

long long nChooseK( long long k, long long n ) {
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    long long result = n;
    for( long long i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}

void applyFewOperations(std::vector<long long>& digits, int oper_number) {
    for (int k = 0; k < oper_number; ++k) {
        int nines = digits[9];
        for (int i = 9; i > 0; --i) {
            digits[i] = digits[i-1];
        }
        digits[0] = nines;
        digits[1] += nines;
    }
}

long long lenAfterSomeOperations(long long number, long long oper_quant) {
    long long len = 0;
    std::vector<long long> digits(10);
    do {
        ++digits[number % 10];
        number /= 10;
    } while (number);

    applyFewOperations(digits, oper_quant % 10);

    if (oper_quant < 10) { return std::accumulate(digits.begin(), digits.end(), 0); }

    long long dozens = oper_quant / 10;
    for (int i = 0; i < 10; ++i) {
        for (int k = 0; k < dozens + 1; ++k) {
            len += nChooseK(k, dozens) * lenAfterSomeOperations(i, k) * digits[i];
        }    
    }
    return len;
}