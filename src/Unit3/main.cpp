#include <iostream>
#include <fstream>

int main(){
    std::ofstream file1, file2;
    file1.open("path_test/test1.txt");
    file2.open("/home/rin/CppLecture/path_test/test2.txt");
    file1 << "Hello, World!" << std::endl;
    file2 << "Hello, World!" << std::endl;
    file1.close();
    file2.close();
}