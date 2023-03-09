#include <bits/stdc++.h>

int main() {
    int n, prev_el = 0, max_len = 1, cur_len = 1;
    std::cin >> n >> prev_el;

    int cur_el;
    
    for (int i = 0; i < n - 1; ++i) {
        std::cin >> cur_el;
        if (prev_el < cur_el) {
            ++cur_len;
            max_len = std::max(cur_len, max_len);
        }
        else { cur_len = 1; }
        prev_el = cur_el;
    }
    std::cout << max_len << "\n";
    return 0;
}