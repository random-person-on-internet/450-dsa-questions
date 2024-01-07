#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size() / 2; i++)
    {
        swap(arr[i], arr[arr.size() - i - 1]);
    }
}

int main()
{
    cout << "Enter number of elements : ";
    int n;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at index " << i + 1 << " : ";
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    reverseArray(arr);
    for (int i : arr)
    {
        cout << i << "\t";
    }

    return 0;
}
