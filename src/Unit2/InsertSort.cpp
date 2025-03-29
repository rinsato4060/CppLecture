#include <iostream>
#include <array>
void InsertSort(){
    std::array<int, 5> arr = {5, 4, 3, 2, 1};
    long n = arr.size();

    for (long int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for (long int i = 0; i < n; i++){
        std::cout << arr[i] << "\n";
    }
}
int main()
{
    InsertSort();
    return 0;
}
