#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 1) cout << -1;
    else
    {
        for (int i = 1; i <= n / 2; i++)
            cout << 2 * i << " " << (2 * i) - 1 << " ";
    }
    
    return 0;
}