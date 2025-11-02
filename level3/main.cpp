#include <iostream>
#include "foo.h"
int main(){
    std::cout << "Level3\n";
    std::cout << foo({1,2,3,4}) << std::endl;
    return 0;
}