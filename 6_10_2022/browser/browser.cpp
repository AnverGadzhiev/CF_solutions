#include <iostream>
#include <vector>
#include <tuple>
#include <numeric>
#include <algorithm>
#include <cmath>

std::tuple<int, int, std::vector<int>> ReadInputData(void)
{   
    int tabs_number, close_step;
    std::cin >> tabs_number >> close_step;
    std::vector<int> tabs;
    
    for (int buf = 0,i = 0; i < tabs_number; ++i)
    {   
        std::cin >> buf;
        tabs.push_back(buf);
    }

    return std::tuple<int, int, std::vector<int>>{ tabs_number, close_step, tabs };
}

void DebugPrint(const std::tuple<int, int, std::vector<int>>& input)
{
    std::cout << std::get<0>(input) << " " << std::get<1>(input) << std::endl;
    std::for_each(std::get<2>(input).begin(), std::get<2>(input).end(), [](const int& n){ std::cout << n << " ";});
    std::cout << "\n";
}

int GetSumOfDeletedTabs(const std::vector<int>& tabs, const int &beg_ind, const int &step)
{
    int sum = -tabs[beg_ind];
    int vec_end = tabs.size() - 1;

    for (int k = 0; k < tabs.size() / step; ++k)
    {
        if (beg_ind - k * step >= 0)       { sum += tabs[beg_ind - k * step]; }
        if (beg_ind + k * step <= vec_end) { sum += tabs[beg_ind + k * step]; }
    }

    return sum;
}

int main()
{
    std::tuple<int, int, std::vector<int>> input = ReadInputData();    
    int tabs_number = std::get<0>(input), close_step = std::get<1>(input);
    std::vector<int> tabs = std::get<2>(input);

    const int tab_diff = std::accumulate(tabs.begin(), tabs.end(), 0); 
    int max_abs_dif = abs(tab_diff);

    // std::cout << tab_diff << std::endl; 

    for (int i = 0; i < tabs.size() / close_step + 3; ++i)
    {
        // std::cout << GetSumOfDeletedTabs(tabs, i, close_step) << " ";
        max_abs_dif = std::max(max_abs_dif, abs(tab_diff - GetSumOfDeletedTabs(tabs, i, close_step)));
    }


    std::cout << max_abs_dif << std::endl;  

    return 0;
}
