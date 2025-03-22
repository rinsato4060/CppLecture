#include <iostream>
#include <array>

int Partition(std::array<int, 9> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

void QuickSort(std::array<int, 9> &arr, int low, int high){
    if (low < high)
    {
        int pi = Partition(arr, low, high);
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}
int main()
{
    std::array<int, 9> arr = {3, 4, 13, 6, 3, 2, 9, 5, 7};
    int n = arr.size();
    QuickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
