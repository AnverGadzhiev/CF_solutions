#include <bits/stdc++.h>

int main()
{
  int t, n, temp;

  for (;t-->0;)
  {
    std::cin >> n;
    std::vector<int> arr;
    for (;n-->0;)
    {
      int temp;
      std::cin >> temp;
      arr.push_back(temp);
    }
    std::sort(arr.begin(), arr.end());

    for (;n-->1;) 
    {
        if arr[n] == arr[n-1] std::cout << "YES" << std::endl;
    }


  }
  return 0;
}