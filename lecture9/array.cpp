#include <iostream>
#include <vector>
using namespace std;

int minArr(int arr[], int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int maxArr(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    cout << minArr(arr, 6) << endl
         << maxArr(arr, 6);

    return 0;
}