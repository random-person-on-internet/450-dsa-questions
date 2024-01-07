#include <iostream>
using namespace std;

int findSum(int arr[], int n)
{
    int max = INT32_MIN;
    int min = INT32_MAX;

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return max + min;
}

int main()
{
    // useless part

    return 0;
}
