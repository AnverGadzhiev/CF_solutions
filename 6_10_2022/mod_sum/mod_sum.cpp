#include <iostream>
#include <tuple>
#include <string>
#include <vector>

std::tuple<int, std::vector<int>> ReadTestCase(void)
{
    int arr_len;
    std::cin >> arr_len;
    std::vector<int> arr;
    for (int buf, i = arr_len; (i-->0) && (std::cin >> buf);) { arr.push_back(buf); }
    return std::tuple<int, std::vector<int>>({arr_len, arr}); 
}

void DebugPrint(const std::tuple<int, std::vector<int>> &input) 
{
    std::cout << "---" << std::endl;
    std::cout << std::get<0>(input) << std::endl;
    std::vector<int> vec = std::get<1>(input); 
    for (int i = vec.size(); i-->0;)
    {
        std::cout << vec[vec.size() - i - 1] << " ";
    }
    std::cout << std::endl << "---" << std::endl;
}

std::string IsItPossibleToEqualizeArrEls(const std::tuple<int, std::vector<int>> &case_);

int main() 
{
    int cases_number;
    std::cin >> cases_number;

    for (int i = cases_number; cases_number--> 0;)
    {
        std::cout << IsItPossibleToEqualizeArrEls(ReadTestCase());
    }

    return 0;
}

std::string IsItPossibleToEqualizeArrEls(const std::tuple<int, std::vector<int>> &case_)
{
    
    return std::string("YES");
}