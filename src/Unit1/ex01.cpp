#include <iostream>
using namespace std;

int main(){
    cout << "Solutions for 12(x+4)-(2-7y)=548 where 1 ≤ x, y ≤ 100:" << endl;
    
    for(int x = 1; x <= 100; x++) {
        int num = 502 - 12 * x;
        if (num % 7 == 0) { 
            int y = num / 7;
            if (y >= 1 && y <= 100) {
                cout << "x = " << x << ", y = " << y << endl;
            }
        }
    }
    
    return 0;
}