#pragma once
#include <vector>
#include <numeric>

int foo(const std::vector<int>& vec){
    int a=100;
    return std::accumulate(vec.begin(), vec.end(), a);
}