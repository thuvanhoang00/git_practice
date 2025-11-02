#include <iostream>
#include "foo.h"
#include "bar.h"
int main(){
    std::cout << "Level3\n";
    std::cout << foo({1,2,3,4}) << std::endl;
    bar(10);
    std::cout << "__________________\n";
    return 0;
}