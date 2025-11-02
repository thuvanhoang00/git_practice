#pragma once
#include <vector>
#include <numeric>
#include <algorithm>

int foo(const std::vector<int>& vec){
    int a=100;
    return std::accumulate(vec.begin(), vec.end(), a);
}