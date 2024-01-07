#include <iostream>
#include <set>
using namespace std;

int doUnion(int a[], int n, int b[], int m)
{
    // just use set lmao
    set<int> ans;

    for (int i = 0; i < n; i++)
    {
        ans.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        ans.insert(b[i]);
    }
    return ans.size();
}

int main()
{
    // do it for urselves

    return 0;
}
