#include <iostream>
#include <array>

constexpr int ArraySize = 5;
void Swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void BubbleSort(std::array<int, ArraySize>& arr)
{
    for (int i = 0; i < ArraySize - 1; ++i)
    {
        bool is_swapped = false;
        for (int j = 0; j < ArraySize - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                Swap(arr[j], arr[j + 1]);
                is_swapped = true;
            }
        }
        if (!is_swapped)
        {
            break; 
        }
    }
}

int main()
{
    std::array<int, ArraySize> arr = {5, 2, 9, 1, 5};
    BubbleSort(arr);
    std::cout << "Sorted array: ";
    for (const auto& num : arr)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
