#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {
        sort(arr, arr + n);

        int result = arr[n - 1] - arr[0];

        int maxi, mini;

        for (int i = 0; i < n; i++)
        {
            mini = min(arr[0] + k, arr[i] - k);
            maxi = max(arr[n - 1] - k, arr[i - 1] + k);

            if (mini < 0)
            {
                continue;
            }

            result = min(result, maxi - mini);
        }

        return result;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}