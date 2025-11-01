#include <iostream>
#include <thread>

void print(){
    std::cout << "threadid: " << std::this_thread::get_id() << " Hello world\n";
}

int main(){
    std::thread t(print);
    t.join();
    return 0;
}