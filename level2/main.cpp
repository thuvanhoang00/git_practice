#include <iostream>
#include <thread>

// add hotfix2

void print(){
    for(int i=0; i<10; ++i){
        std::cout << "threadid: " << std::this_thread::get_id() << " Hello world\n";
    }
}

int main(){
    std::thread t(print);
    t.join();
    auto l = []()->int{
        return 1;
    };

    std::cout << l();
    return 0;
}