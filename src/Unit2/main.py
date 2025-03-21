#include <iostream>
int main() {
    int num = 2;
    std::cout << 1 / num << std::endl;
    std::cout << 1 / (double)num << std::endl;
    std::cout << 1 / static_cast<double>(num) << std::endl;
    return 0;
}