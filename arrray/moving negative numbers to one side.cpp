/*NOTE : order doesn't matter here*/

#include <iostream>
using namespace std;

void rearrange(int arr[], int n)
{
    int it = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            it++;
            if (i != it)
            {
                swap(arr[i], arr[it]);
            }
        }
    }
}

int main()
{
    // idc

    return 0;
}
