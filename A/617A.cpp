#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = (n / 5) + (n % 5 == 0 ? 0 : 1);
    cout << ans;
    return 0;
}