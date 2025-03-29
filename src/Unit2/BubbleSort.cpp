#include <iostream>
#include <array>
void BubbleSort(){
    std::array<int, 5> arr = {32, 45, 1, 3, 5};
    long n = arr.size();

    for (long i = 0; i < n; i++)
    {
        for (long j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    for (long i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
int main()
{
    BubbleSort();
    return 0;
}
