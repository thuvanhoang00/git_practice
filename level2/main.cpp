#include <iostream>

void print(){
    std::cout << "Hello world\n";
}

int main(){
    print();
    auto l = []()->int{
        return 1;
    };

    std::cout << l();
    return 0;
}