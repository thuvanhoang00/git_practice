#pragma once
#include <vector>
#include <numeric>

int foo(const std::vector<int>& vec){
    return std::accumulate(vec.begin(), vec.end(), 0);
}