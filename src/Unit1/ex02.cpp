#include <iostream>

int f(){
    double inv = 1, rate, goal;
    std::cout << "Enter a number: ";
    std::cin >> rate;
    rate = rate * 0.01;
    goal = 2 * inv;

    int year = 0;
    while(inv <= goal){
        inv = inv + inv * rate;
        year++;
    }
    std::cout << "It will take " << year << " years to double your investment\n";

}