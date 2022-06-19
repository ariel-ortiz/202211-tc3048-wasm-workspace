#include <iostream>

int main() {
    int* p = new int[1024];
    p[1024] = 1which ;
    std::cout << "Hello, GitPod\n";
    delete []p;
    return 42;
}
