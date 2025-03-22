#include <iostream>
#include <array>
void QuickSort(){
    std::array<int, 9> arr = {3, 4, 13, 6, 3, 2, 9, 5, 7};
    long n = arr.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
int main()
{
    QuickSort();
    return 0;
}
