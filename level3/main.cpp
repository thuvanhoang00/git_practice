#include <iostream>
#include "foo.h"
#include "bar.h"
#include <atomic>

int main(){
    std::cout << "Level3\n";
    std::cout << foo({1,2,3,4}) << std::endl;
    //bar(10);
    return 0;
}