// DUTCH NATIONAL FLAG PROBLEM
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sort012(int a[], int n)
    {
        int s = 0;
        int it = 0;
        int e = n - 1;

        while (it <= e)
        {
            if (a[it] == 0)
            {
                swap(a[s++], a[it++]);
            }
            else if (a[it] == 1)
            {
                it++;
            }
            else
            {
                swap(a[e--], a[it]);
            }
        }
    }
};

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

// void sort012(int a[], int n)
// {
//     int s = 0;
//     int m = 0;
//     int e = n - 1;

//     bool check = true;

//     while (check)
//     {
//         while (a[s] == 0)
//         {
//             s++;
//         }
//         while (a[e] == 2)
//         {
//             e--;
//         }
//         if (a[s] == 2 && a[e] == 0)
//         {
//             swap(a[s++], a[e--]);
//             continue;
//         }

//         // now the only 3 possible conditions left: {2,1} , {1,0} , {1,1}
//         // we try to get same situation in all, i.e, m with 0 and e with 2, middle part being unknown

//         if (a[s] == 2 && a[e] == 1)
//         {
//             swap(a[s], a[e]);
//             m = s;
//             s--;
//         }

//         else
//         {
//             m = s;
//             s--;
//             e++;
//         }

//         // now we start to increment m
//         check = false;

//         while (m < e)
//         {
//             if (a[m] == 0)
//             {
//                 m++;
//                 continue;
//             }

//             if (a[m] == 1)
//             {
//                 // we get 1 at m
//                 swap(a[s], a[m]);
//                 s++;
//                 m++;
//             }

//             else
//             {
//                 // we never know what is at e-1;
//                 swap(a[e], a[m]);
//                 e--;
//             }
//         }
//     }
// }
