#include <bits/stdc++.h>
// #include "army.h"
#define for(x) for(;x-->0;)


int ServiceDuration(const std::vector<int> &periods, const std::pair<int, int> &ranks)
{
    // std::cout << std::get<0>(ranks) << " " << std::get<1>(ranks) << std::endl;
    return std::accumulate(&periods[std::get<0>(ranks) - 1], &periods[std::get<1>(ranks) - 1], 0);
}

std::pair<int, int> ConvertArrayToPair(const std::array<int, 2> &arr)
{
    return std::pair<int, int>{arr[0], arr[1]};
}

void PrintVector(std::vector<int> &v)
{
    std::for_each(v.begin(), v.end(), [](int &n) { std::cout << n << " ";});
    std::cout << "\n";
}

int main()
{   
    int ranks_number;
    std::vector<int> ranks_service_duration;
    std::array<int, 2> career_path;

    std::cin >> ranks_number;
    --ranks_number;
    for(ranks_number)
    {
        int rank_duration;
        std::cin >> rank_duration;
        ranks_service_duration.push_back(rank_duration);
    }
    std::cin >> career_path[0] >> career_path[1];

    /*
    std::cout << ranks_number << std::endl;
    PrintVector(ranks_service_duration);
    std::cout << career_path[0] << " " 
                << career_path[1] << std::endl;
    */
   
    std::cout << ServiceDuration(ranks_service_duration, ConvertArrayToPair(career_path));
    return 0;
}